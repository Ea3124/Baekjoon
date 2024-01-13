#include <iostream>

int main() {
    int A;
    std::cin >> A;
    for(int i=0;i<A;i++){
        for(int j=0;j<=i;j++){
            std::cout<<'*';
        }
        std::cout<<std::endl;
    }
    return 0;
}
