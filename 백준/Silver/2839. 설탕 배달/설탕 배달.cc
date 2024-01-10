
#include <iostream>

int main() {
    int N, all_sugar, y=0;
    std::cin>>N;
    for(int i=0;i<=50;i++){
        if((N+2*i)%5 == 0){
            y=i;
            break;
        }
    }
    if(N-3*y < 0) all_sugar = -1;

    else all_sugar = (N+2*y)/5;

    std::cout<<all_sugar;
    return 0;
}

/*
 *설탕배달

5x + 3y = N일때,

x = (N-3y)/5

x+y의 최솟값?
= (N+2y)/5 가 정수가 되는 최솟값.

이때 x 값이 음수가 나올시 -1.


 */

