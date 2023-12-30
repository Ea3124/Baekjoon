#include <iostream>

int main() {
    const int SIZE = 10;
    int C[SIZE];

    // 10개의 숫자를 입력받고 42로 나눈 나머지를 저장
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> C[i];
        C[i] = C[i] % 42;
    }

    // 서로 다른 나머지의 개수를 세기 위한 배열
    int count[42] = {0};

    // 서로 다른 나머지의 개수 계산
    for (int j = 0; j < SIZE; ++j) {
        count[C[j]]++;
    }

    // 서로 다른 나머지의 개수 출력
    int real_count = 0;
    for (int k = 0; k < 42; ++k) {
        if (count[k] > 0) {
            real_count++;
        }
    }

    std::cout << real_count << std::endl;

    return 0;
}
