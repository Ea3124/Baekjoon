
#include <iostream>
#include <string>

int RecursiveTenFunction(std::string& x, int N) {
    int powerOfTen = 1;
    int Ret = N;
    for (int i = 0; i < x.length(); i++) {
        Ret += (N / powerOfTen) % 10;
        powerOfTen *= 10;
    }
    return Ret;
}
int main() {
    int M, NMin;
    std::string MM;
    std::cin >> MM;
    M = std::stoi(MM);
    NMin = M; // M을 넘지 않는다.
    int N;
    for (int x = M; x >= 1; x--) {
        N=x;
        if ((M == RecursiveTenFunction(MM,N)) && (N <= NMin)) NMin = N;
    }

    if(NMin == M) std::cout<<0;
    else std::cout<<NMin;

    return 0;
}

/*
 M == N+N/100+(N/10)%10+N%10
*/

