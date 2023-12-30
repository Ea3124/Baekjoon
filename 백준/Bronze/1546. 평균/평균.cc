#include <iostream>
int main() {
    int N, grade_max = 0;
    std::cin >> N;
    int C[N];
    float sum = 0, mean;
    for (int i = 0; i < N; i++) {
        std::cin >> C[i];
        grade_max = std::max(grade_max, C[i]);
    }
    for (int k = 0; k < N; k++) {
        sum += C[k] / static_cast<float>(grade_max) * 100;
    }
    mean = sum / N;
    std::cout << mean;
    return 0;
}
