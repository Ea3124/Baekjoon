#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,num;
    cin>>n;

    queue<int> Q;
    string s;

    for(int i=0; i<n;i++){
        cin>>s;
        if(s=="push"){
            cin>>num;
            Q.push(num);
        }
        else if(s=="front"){
            if(Q.empty()) cout<<"-1"<<"\n";
            else cout<<Q.front()<<"\n";
        }
        else if(s=="back"){
            if(Q.empty()) cout<<"-1"<<"\n";
            else cout<<Q.back()<<"\n";
        }
        else if(s=="pop"){
            if(Q.empty()) cout<<"-1"<<"\n";
            else {
                cout<<Q.front()<<"\n";
                Q.pop();
            }
        }
        else if(s=="empty"){
            if(Q.empty()) cout<<"1"<<"\n";
            else cout<<"0"<<"\n";
        }
        else if(s=="size"){
            cout<<Q.size()<<"\n";
        }
    }
}