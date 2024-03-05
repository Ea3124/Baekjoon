#include <iostream>
#include <set>

    int main() {
        std::cin.tie(NULL);
        std::cout.tie(NULL);
        std::ios_base::sync_with_stdio(false);

        int N;
        std::cin >> N;

        std::set<std::pair<int, int>> x_y;

        for (int i = 0; i < N; i++) {
            int a, b;
            std::cin >> a >> b;
            x_y.insert({a, b});
        }

        // x_y에 저장된 모든 쌍 출력 (선택적)
        for (const auto& p : x_y) {
            std::cout << p.first << " " << p.second << "\n";
        }

        return 0;
    }