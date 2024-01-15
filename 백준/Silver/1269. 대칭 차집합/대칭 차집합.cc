#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <string>

    int main(){
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int A,B,A_value,B_value;
    std::string Nname, Mname, find_name;
    std::cin>>A>>B;
    std::unordered_set<int> A_set;
    std::unordered_set<int> B_set;
    for(int i=0;i<A;i++){
        std::cin>>A_value;
        A_set.insert(A_value);
    }
    for(int j=0;j<B;j++){
        std::cin>>B_value;
        auto it = A_set.find(B_value);
        if(it != A_set.end()) {
            A_set.erase(B_value);
        }
        else B_set.insert(B_value);
    }
    std::cout<<A_set.size()+B_set.size();
    return 0;
}