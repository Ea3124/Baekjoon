#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    while(true){
        string a;
        getline(cin,a);

        if(a==".") break;
        stack<char> C;
        bool isValid = true;

        for(auto c : a){
            if(c=='.') break;
            else if(c=='(' || c=='[') C.push(c);
            else if(c==')') {
                if (C.empty()) isValid= false;
                else if(C.top() == '[' ) isValid= false;
                else if (C.top() == '(') C.pop();
            }
            else if(c==']') {
                if (C.empty()) isValid= false;
                else if(C.top() == '(' ) isValid= false;
                else if (C.top() == '[') C.pop();
            }
        }
        if(!C.empty()) isValid= false;

        if(isValid) cout<<"yes\n";
        else cout<<"no\n";
    }
}