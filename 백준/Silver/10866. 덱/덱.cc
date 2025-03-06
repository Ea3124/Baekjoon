//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    cin>>n;

    deque<int> Q;

    string s;

    for(int i=0; i<n;i++){
        cin>>s;
        if(s=="push_front"){
            cin>>num;
            Q.push_front(num);
        }
        else if(s=="push_back"){
            cin>>num;
            Q.push_back(num);
        }
        else if(s=="front"){
            if(Q.empty()) cout<<"-1"<<"\n";
            else cout<<Q.front()<<"\n";
        }
        else if(s=="back"){
            if(Q.empty()) cout<<"-1"<<"\n";
            else cout<<Q.back()<<"\n";
        }
        else if(s=="pop_front"){
            if(Q.empty()) cout<<"-1"<<"\n";
            else {
                cout<<Q.front()<<"\n";
                Q.pop_front();
            }
        }
        else if(s=="pop_back"){
            if(Q.empty()) cout<<"-1"<<"\n";
            else {
                cout<<Q.back()<<"\n";
                Q.pop_back();
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
