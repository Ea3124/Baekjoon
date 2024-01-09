#include <iostream>

int main() {
    int M, NMin;
    std::cin >> M;
    NMin = M; // M을 넘지 않는다.
    int N;

    for (int x = M; x >= 1; x--) {
        N=x;

        if ((M == N+(N/100000)%10+(N/10000)%10+(N/1000)%10+(N/100)%10+(N/10)%10+N%10) && (N <= NMin)) NMin = N;
    }

    if(NMin == M) std::cout<<0;
    else std::cout<<NMin;

    return 0;
}