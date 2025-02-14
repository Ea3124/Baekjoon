#include <iostream>
#include <string>
#include <list>
using namespace std;



int main() {

    int n, k;
    cin>>n>>k;
    list<int> L = {};
    auto t = L.begin();
    for (int i=1;i<=n;i++){
        L.insert(t,i);
    }

    cout<<'<';
    while(!L.empty()) {
        int j = k;
        while (j != 0) {
            t++;
            j--;
            if(t == L.end()) { 
                t = L.begin(); 
            }
        }
        cout << *t;
        t = L.erase(t);
        t--;
        if(!L.empty()) cout<<", ";
    }
    cout<<'>';
}