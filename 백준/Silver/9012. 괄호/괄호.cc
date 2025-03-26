#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,count=0;
    bool vps = true;

    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vps = true;

        stack<char> C;

        for(auto c : s){
            if(c=='('){
                C.push(c);
            }
            else if(c==')'){
                if(C.empty()) vps = false;
                else if(C.top() =='(') C.pop();
            }
        }
        if(vps && C.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}