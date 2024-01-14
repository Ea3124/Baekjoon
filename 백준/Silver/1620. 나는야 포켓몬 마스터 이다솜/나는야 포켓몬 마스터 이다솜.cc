#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>

int main() {
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int N,M;
    std::cin>>N>>M;
    std::unordered_map<std::string, int> dogam;
    std::unordered_map<int, std::string> dogam_rev;
    std::string P_name;

    for(int i=1;i<=N;i++){
        std::cin>>P_name;
        dogam.insert(std::make_pair(P_name,i));
        dogam_rev.insert(std::make_pair(i,P_name));
    }
    std::string input_p;
    std::string input_p_rev;
    for(int j=1;j<=M;j++) {
        std::cin >> input_p;
        auto pair = dogam.find(input_p);
        if (pair != dogam.end()) {
            std::cout << pair->second << '\n';
        }
        else {
            auto pair2 = dogam_rev.find(std::stoi(input_p));
            if(pair2 != dogam_rev.end()) std::cout << pair2->second << '\n';
        }
        std::cin.ignore();
    }
    return 0;
}
