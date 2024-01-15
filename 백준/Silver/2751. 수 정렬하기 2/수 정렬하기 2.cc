#include <set>
#include <iostream>

int main(){
    int N,value;
    std::cin>>N;
    std::set<int> Values;
    for(int i=0;i<N;i++){
        std::cin>>value;
        Values.insert(value);
    }
    for(auto j : Values){
        std::cout<<j<<"\n";
    }
    return 0;
}