#include <iostream>

int main(){
    int max=0;
    int cp_v=0;
    int max_i=0;

    for(int i=0; i<9; i++){
        std::cin>>cp_v;
        if(cp_v > max){
            max = cp_v;
            max_i = i+1;
        }
    }

    std::cout<<max<<std::endl<<max_i;
    return 0;
}