#include <iostream>

int main() {

    int a1,a0,c, n0, state;
    std::cin>>a1>>a0>>c>>n0;
    while(n0<=100) {
        if (a1 * n0 + a0 > c * n0) {
            state = 0;
            break;
        }
        else state =1;
        n0++;
    }
    if (state == 0) std::cout << 0;
    else std::cout<<1;
    return 0;
}