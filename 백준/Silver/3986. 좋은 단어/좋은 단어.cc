#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,count=0;

    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        stack<char> C;

        for(auto c : s){
            if(c=='A' && C.empty()){
                C.push(c);
            }
            else if(c=='A' && C.top()=='B'){
                C.push(c);
            }
            else if(c=='A' && C.top()=='A'){
                C.pop();
            }
            else if(c=='B' && C.empty()){
                C.push(c);
            }
            else if(c=='B' && C.top()=='A'){
                C.push(c);
            }
            else if(c=='B' && C.top()=='B') {
                C.pop();
            }
        }
        if(C.empty()) count++;
    }
    cout<<count;
}