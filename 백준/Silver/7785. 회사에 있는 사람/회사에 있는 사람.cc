#include <iostream>
#include <string>
#include <set>
#include <algorithm>

int main() {
    int N;
    std::cin>>N;
    std::set<std::string> Log;
    char Name[6];
    std::string State;
    for(int i=0;i<N;i++){
        std::cin >> Name>>State;
        if(State == "enter") Log.insert(Name);
        else if(State == "leave") Log.erase(Name);
    }
    for(auto m=Log.rbegin();m != Log.rend();++m){
        std::cout<<*m<<"\n";
    }
    return 0;
}
