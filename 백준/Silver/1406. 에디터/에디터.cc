#include <iostream>
#include <string>
#include <list>
using namespace std;

int num;
char cursor;

int main(void) {
    string s;
    cin>>s;
    list<char> L = {};
    for(auto c : s) L.push_back(c);
    list<char>::iterator t = L.end();

    cin>>num;

    for (int i=0; i<num;i++){
        cin>>cursor;
        if(cursor == 'P'){
            char s;
            cin>>s;
            L.insert(t,s);
        }
        else if(cursor =='L') {
            if (t != L.begin()) t--;
        }
        else if(cursor =='D') {
            if (t != L.end()) t++;
        }
        else if(cursor =='B'){
            if (t != L.begin()) {
                t--;
                t = L.erase(t);
            }
        }
    }

    for(auto i : L) cout << i;
}