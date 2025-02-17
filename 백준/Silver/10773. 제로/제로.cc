#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack<int> S;

    int k,num, sum=0;
    cin>>k;

    for (int i=0;i<k;i++){
        cin>>num;
        if(num==0){
            sum -= S.top();
            S.pop();
        }
        else S.push(num);
        sum += num;
    }
    cout<<sum;
}