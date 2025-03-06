#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m,num,count=0,tar;
    cin>>n>>m;

    deque<int> D;

    for(int k=1;k<=n;k++){
        D.push_back(k);
    }

    for(int i=0;i<m;i++){
        cin>>num;

        if(D.front() == num){
            D.pop_front();
        }
        else {
            for(int y=0;y<D.size();y++){
                if(D[y] == num) {
                    if(D.size() - y >= y ){
                        while(D.front() != num){
                            tar = D.front();
                            D.pop_front();
                            D.push_back(tar);
                            count++;
                        }
                        D.pop_front();
                    }
                    else{
                        while(D.front() != num){
                            tar = D.back();
                            D.pop_back();
                            D.push_front(tar);
                            count++;
                        }
                        D.pop_front();
                    }
                }
                else continue;
            }
        }
    }
    cout<<count;
}