#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    int N,k;
    std::cin>>N>>k;
    int Values[N];
    for(int i=0;i<N;i++) {
        std::cin >> Values[i];
    }
    std::sort(Values,Values+N);
    std::cout<<Values[N-k];
    return 0;
}