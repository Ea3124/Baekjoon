
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

