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
        while(CValues[j] !=0) {
            std::cout<<j+1<<'\n';
            CValues[j]--;
        }
    }

    return 0;
}
