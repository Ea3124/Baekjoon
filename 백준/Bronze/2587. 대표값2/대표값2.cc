#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    int Mean=0;
    int Values[5];
    for(int i=0;i<5;i++) {
        std::cin >> Values[i];
        Mean += Values[i];
    }
    std::sort(Values,Values+5);
    Mean = Mean/5;
    std::cout<<Mean<<'\n'<<Values[2];
    return 0;
}