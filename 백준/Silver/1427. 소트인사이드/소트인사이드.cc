#include <iostream>
#include <string>
#include <algorithm>

bool compare(int a, int b) {
    return a > b;  // 내림차순 정렬을 위한 비교 함수
}

int main() {
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    std::string Value;
    std::cin >> Value;

    int* input_int = new int[Value.length()];

    for (int i = 0; i < Value.length(); i++) {
        input_int[i] = Value[i] - '0';
    }

    std::sort(input_int, input_int + Value.length(), compare);  // 내림차순 정렬

    for (int j = 0; j < Value.length(); j++) {
        std::cout << input_int[j];
    }

    delete[] input_int;

    return 0;
}
