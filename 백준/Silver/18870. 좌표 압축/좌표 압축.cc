#include <iostream>
#include <vector>
#include <algorithm>

    int main() {
        std::cin.tie(NULL);
        std::cout.tie(NULL);
        std::ios_base::sync_with_stdio(false);

        int N,M;
        std::cin >> N;
        std::vector<int> dots1, dots2;

        for (int i = 0; i < N; i++) {
            std::cin >> M;
            dots1.push_back(M);
            dots2.push_back(M);
        }

        std::sort(dots2.begin(), dots2.end());
        dots2.erase(std::unique(dots2.begin(), dots2.end()), dots2.end());

        for (int i = 0; i < N; i++)
        {
            int it = std::lower_bound(dots2.begin(), dots2.end(), dots1[i])-dots2.begin();
            std::cout<<it<<' ';
        }

        return 0;
    }