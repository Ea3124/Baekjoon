#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count=0, p=0;
    string s;
    cin>>s;

    stack<char> C;

    for(auto c : s){
        if(c=='('){
            if(C.empty()) { C.push(c);
            }
            else if(C.top() ==')') {
                C.push(c);
            }
            else if(C.top() =='(') {
                p= p+1;
                count= count+1;
            }
        }
        else if(c==')'){
            if(C.top() =='(') {
                C.push(c);
                count = count + p;
            }
            else if(C.top() ==')') {
                C.push(c);
                p= p-1;
            }
        }
    }
    cout<<count;
    }