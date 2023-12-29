#include <iostream>

int main() {
    int  A, B, C, num1,num2,num3,num4;
    std::cin >> A >> B >> C;
    num1 = (A+B)%C;
    num2 = ((A%C) + (B%C))%C;
    num3 = (A*B)%C;
    num4 = ((A%C) * (B%C))%C;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    return 0;
}
