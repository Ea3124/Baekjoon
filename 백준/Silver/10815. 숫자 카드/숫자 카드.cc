#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    int A, B, A_key;

    std::cin >> A;
    std::unordered_set<int> card;

    for (int i = 0; i < A; i++) {
        std::cin >> A_key;
        card.insert(A_key);
    }

    std::cin >> B;
    std::vector<int> MatchCard(B);

    for (int &match : MatchCard) {
        std::cin >> match;
    }

    for (const int &match : MatchCard) {
        std::cout << (card.find(match) != card.end()) << ' ';
    }

    return 0;
}
