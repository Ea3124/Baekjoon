#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <string>

    int main(){
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    std::string Alphabets;
    std::cin>>Alphabets;
    std::unordered_set<std::string> substrings;

    for (int i = 1; i <= Alphabets.length(); i++) {
        for (int j = 0; j <= Alphabets.length() - i; j++) {
            substrings.insert(Alphabets.substr(j, i));
        }
    }
    
    std::cout<<substrings.size();
    return 0;
}