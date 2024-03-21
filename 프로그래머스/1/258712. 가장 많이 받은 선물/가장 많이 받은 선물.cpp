#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    unordered_map<string, unordered_map<string, int>> giftExchanges;
    unordered_map<string, int> giftBalances, nextMonthGiftCounts;

    // 선물 교환 기록 및 선물 잔고 업데이트
    for (const string& gift : gifts) {
        size_t spacePos = gift.find(' ');
        string giver = gift.substr(0, spacePos);
        string receiver = gift.substr(spacePos + 1);
        
        giftExchanges[giver][receiver]++;
        giftBalances[giver]++;
        giftBalances[receiver]--;
    }

    int maxNextMonthGifts = 0; // 다음 달에 가장 많은 선물을 받는 사람의 선물 수

    // 다음 달에 선물을 받게 될 사람 결정
    for (size_t i = 0; i < friends.size(); ++i) {
        for (size_t j = i + 1; j < friends.size(); ++j) {
            string& friend1 = friends[i];
            string& friend2 = friends[j];
            
            int netGifts1to2 = giftExchanges[friend1][friend2] - giftExchanges[friend2][friend1];
            
            // friend2가 friend1에게서 선물을 더 많이 받았다면
            if (netGifts1to2 < 0) {
                maxNextMonthGifts = max(++nextMonthGiftCounts[friend2], maxNextMonthGifts);
            } else if (netGifts1to2 > 0) { // friend1이 friend2에게서 선물을 더 많이 받았다면
                maxNextMonthGifts = max(++nextMonthGiftCounts[friend1], maxNextMonthGifts);
            } else { // 서로 선물을 같은 수만큼 주고받았다면, 선물 잔고가 높은 사람이 선물을 받음
                if (giftBalances[friend1] > giftBalances[friend2]) {
                    maxNextMonthGifts = max(++nextMonthGiftCounts[friend1], maxNextMonthGifts);
                } else if (giftBalances[friend1] < giftBalances[friend2]) {
                    maxNextMonthGifts = max(++nextMonthGiftCounts[friend2], maxNextMonthGifts);
                }
            }
        }
    }

    return maxNextMonthGifts;
}
