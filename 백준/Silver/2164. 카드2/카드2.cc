#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,seq=1, tmp;
    cin>>n;

    queue<int> Q;

    for(int i=1;i<=n;i++){
        Q.push(i);
    }

    while(Q.size() > 1){
        if(seq % 2 == 1){
            Q.pop();
            seq++;
        }
        else if(seq % 2 == 0){
            tmp = Q.front();
            Q.pop();
            Q.push(tmp);
            seq++;
        }
    }

    cout<<Q.front();
}