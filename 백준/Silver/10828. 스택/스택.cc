#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> S;
    int n, num;
    cin>>n;

    string s;

    while(n>0){
        cin>>s;
        if(s=="push"){
            cin>>num;
            S.push(num);
        }
        else if(s=="pop"){
            if (S.empty()) cout << "-1";
            else {
                cout<<S.top();
                S.pop();
            }
            cout<<"\n";
        }
        else if(s=="size"){
            cout<<S.size();
            cout<<"\n";
        }
        else if(s=="empty"){
            if(S.empty()) cout<<'1';
            else cout<<'0';
            cout<<"\n";
        }
        else if(s=="top"){
            if(S.empty()) cout<<"-1";
            else cout<<S.top();
            cout<<"\n";
        }
        n--;

    }
}