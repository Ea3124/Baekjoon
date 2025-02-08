#include <iostream>
#include <string>
#include <list>
using namespace std;

int num;

int main() {
    cin>>num;
    cin.ignore();
    string s;
    for (int i=0; i<num;i++){
        list<char> L;
        list<char>::iterator t = L.end(); // 고정이 아니라 가변 되어있어서?

        cin>>s;
        cin.ignore();
        for(int item : s) {
            if(item == '<') {
                if (t != L.begin()) t--;
            }
            else if(item == '>') {
                if (t != L.end()) t++;
            }
            else if(item == '-') {
                if (t != L.begin()) {
                    t--;
                    t = L.erase(t);
                }
            }
            else L.insert(t, item);
        }

        for(char k : L) cout << k;
        cout<<'\n';
    }

}