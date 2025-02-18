#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack<int> S;
    vector<int> V;
    queue<char> V_v;

    int n,num, no=0;
    cin>>n;
    int j=0;

    for (int k=0;k<n;k++){
        cin>>num;

        while(S.empty() || num > j){
            S.push(++j);
            V_v.push('+');
        }

        if (num == S.top()){ // i) j=5, S.top = 5, num = 5
//            cout<<S.top();
            S.pop(); // i-2) j=5, S.top = 4, num = 5
            V_v.push('-');
        }
        else if (num != S.top()){
            no=1;
        }
    }

    if(no ==1){
        cout<<"NO";
    }
    else if (no==0){
        while(!V_v.empty()){
            cout<<V_v.front()<<"\n";
            V_v.pop();
        }
    }
}
