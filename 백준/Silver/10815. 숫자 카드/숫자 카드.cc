#include <iostream>
#include <map>

int main() {
    int A, B, A_key;

    std::cin >> A;
    std::map<int, int> card;

    for (int i = 0; i < A; i++) {
        std::cin >> A_key;
        card[A_key] = 0;
    }
    std::cin >> B;
    int MatchCard[B];

    for (int j = 0; j < B; j++) {
        std::cin >> MatchCard[j];
    }
    for (int k=0;k<B;k++) {
        if (card.find(MatchCard[k]) != card.end()) {
            std::cout<<1<<' ';
        }
        else std::cout<<0<<' ';
    }
    return 0;
}
