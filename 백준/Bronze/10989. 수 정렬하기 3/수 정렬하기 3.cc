#include <iostream>

int main(){
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int N,A;
    std::cin>>N;
    int CValues[10000]={0,};
    for(int i=0;i<N;i++){
        std::cin>>A;
        CValues[A-1]++;
    }
    for(int j=0;j<10000;j++){
        for(int k=CValues[j]; k>0; k--) {
            std::cout<<j+1<<'\n';
        }
    }

    return 0;
}