#include <iostream>

int main() {
    int  A, B,num1,num2,num3,num4;
    std::cin >> A >> B;
    num1 = A *(B%10);
    num2 = A*(B%100 - B%10)/10;
    num3 = A*(B-B%100)/100;
    num4 = num1+10*num2+100*num3;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    return 0;
}
