#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <set>
#include <string>

    int main(){
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N,M,count=0;
    std::string Nname, Mname, find_name;
    std::cin>>N>>M;
    std::unordered_set<std::string> Nhear_list;
    std::set<std::string> NseeAndhear_list;

    for(int i=0;i<N;i++){
        std::cin>>Nname;
        Nhear_list.insert(Nname);
    }
    for(int j=0;j<M;j++){
        std::cin>>Mname;
        auto it = Nhear_list.find(Mname);
        if(it != Nhear_list.end()) {
            NseeAndhear_list.insert(Mname);
            count++;
        }
    }
    std::cout<<count<<'\n';
    for(const auto & k : NseeAndhear_list){
        std::cout<<k<<'\n';
    }
    return 0;
}