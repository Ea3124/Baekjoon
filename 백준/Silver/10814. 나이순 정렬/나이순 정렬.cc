#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

    int main() {
        std::cin.tie(NULL);
        std::cout.tie(NULL);
        std::ios_base::sync_with_stdio(false);

        int N;
        std::cin >> N;

        std::vector<std::pair<int, std::string>> words;

        for (int i = 0; i < N; i++) {
            std::string word;
            int age;
            std::cin>>age>>word;
            words.push_back({age, word});
        }

        auto comp = [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
            return a.first < b.first;
        };

        std::stable_sort(words.begin(), words.end(), comp);

        // x_y에 저장된 모든 쌍 출력 (선택적)
        for (const auto& p : words) {
            std::cout << p.first<< ' ' << p.second << "\n";
        }

        return 0;
    }

    //먼저 array에 ? vector에 다 받고
    // length 길이를 pair로 해서 작은게 앞으로 정렬
    // 그 후에 뒤에 정렬?
