#include <iostream>
#include <algorithm>
#include <unordered_map>

    int main(){
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int N,M, key, find_key;
    std::cin>>N;
    std::unordered_map<int,int> card;

    for(int i=0;i<N;i++){
        std::cin>>key;
        auto pair = card.find(key);
        if(pair != card.end()) pair->second++;
        else card.insert(std::make_pair(key,1));
    }

    std::cin>>M;
    for(int k=0;k<M;k++){
        std::cin>>find_key;
        auto it = card.find(find_key);
        if(it != card.end()) std::cout<<it->second<<' ';
        else std::cout<<"0 ";
    }

    return 0;
}