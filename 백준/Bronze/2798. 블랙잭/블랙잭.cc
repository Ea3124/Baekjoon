#include <iostream>

int main() {
    int N, M, MMax = 0;
    std::cin >> N >> M;

    int *Num = new int[N];  // N을 기반으로 배열을 동적으로 할당

    for (int x = 0; x < N; x++) {
        std::cin >> Num[x];
    }

    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                if ((Num[i] + Num[j] + Num[k] <= M) && (Num[i] + Num[j] + Num[k] >= MMax))
                    MMax = Num[i] + Num[j] + Num[k];
            }
        }
    }

    std::cout << MMax;

    delete[] Num;  // 동적으로 할당한 메모리를 해제

    return 0;
}