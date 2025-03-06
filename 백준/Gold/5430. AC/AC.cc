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

    int n,num,list_num;
    char count;
    string s,list;
    cin>>n;

    deque<int> D;
    deque<int> DR;

    for(int i=0;i<n;i++){

        D.clear();
        DR.clear();
        count = 's';
        list_num=0;

        cin>>s;
        cin>>num;
        cin>>list;

        for(auto c : list){
            if(c == '[' ) continue;
            else if(c ==',' || c == ']'){
                if(list_num==0) continue;
                else {
                    D.push_back(list_num);
                    DR.push_front(list_num);
                    list_num = 0;
                }
            }
            else{
                list_num = list_num*10 + (c-48);
            }
        }

        for(auto c2:s){
            if(c2=='R'){
                if(count == 's') count = 'r';
                else if(count =='r') count = 's';
            }
            if(c2=='D'){
                if(D.empty() || DR.empty() || count =='n') count = 'n';
                else if(count =='s'){
                    D.pop_front();
                    DR.pop_back();
                }
                else if(count =='r'){
                    D.pop_back();
                    DR.pop_front();
                }
            }
        }

        if(count == 'n'){
            cout<<"error\n";
        }
        else if(count =='s'){
            cout<<'[';
            while(!D.empty()) {
                cout << D.front();
                D.pop_front();
                if (!D.empty()) cout << ',';
            }
            cout<<']'<<'\n';
        }
        else if(count =='r'){
            cout<<'[';
            while(!DR.empty()){
                cout<<DR.front();
                DR.pop_front();
                if(!DR.empty()) cout<<',';
            }
            cout<<']'<<'\n';
        }
    }
}

