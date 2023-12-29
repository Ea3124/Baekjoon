#include <iostream>

int main() {
    int  i, N, M,A, B;
    std::cin >> N >> M;
    int C[N];
    for (i=0;i<N;i++) {
        C[i] = i+1;
        }
    for (int j=0 ; j<M ; j++){
        std::cin>>A>>B;
        int temp;
        temp = C[A-1];
        C[A-1]= C[B-1];
        C[B-1] = temp;
    }
    for (int k=0;k<N;k++){
        std::cout<<C[k]<<" ";
    }
    return 0;
}
