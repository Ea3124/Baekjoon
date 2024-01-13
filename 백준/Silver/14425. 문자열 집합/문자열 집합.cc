#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    int N,M;
    std::cin>>N>>M;
    std::unordered_set<std::string> Setting;
    std::unordered_set<std::string> Match;
    std::string N_string;
    std::string M_string;
    int count =0;
    for(int i=0;i<N;i++){
        std::cin>>N_string;
        Setting.insert(N_string);
    }
    for(int i=0;i<M;i++){
        std::cin>>M_string;
        if(Setting.find(M_string) != Setting.end()){
            count++;
        }
    }
        std::cout<<count;
    return 0;
}
