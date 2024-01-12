#include <iostream>
#include <vector>
#include <algorithm>
void BinarySearch(std::vector<int>& L, int r, int low, int high){
    if(low>high) std::cout<<0<<' ';
    else {
        int mid = (low + high) / 2;
        int e = L.at(mid);
        if (r == e) std::cout << 1 << ' ';
        else if (r < e) BinarySearch(L, r, low, mid - 1);
        else BinarySearch(L, r, mid + 1, high);
    }
}

int main() {
    int A, B;
    std::cin >> A;
    std::vector<int> card;

    for (int i = 0; i < A; i++) {
        int value;
        std::cin >> value;
        card.push_back(value);
    }
    std::sort(card.begin(),card.end());
    std::cin >> B;
    int MatchCard[B];

    for (int j = 0; j < B; j++) {
        std::cin >> MatchCard[j];
    }
    for (int k=0;k<B;k++) {
        BinarySearch(card, MatchCard[k],0,A-1);
    }
    return 0;
}