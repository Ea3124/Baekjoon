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
            // 조건 변경
            // qwx"
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
// abcd"
// insert시, t 앞 추가, t는 그대로
// erase시, t 삭제, t는 뒤에거 가리킴

// 추가시, t가 첫 번째일시 push_front 아닐시 insert?
// -> 이럴려면 1번

// 1. t는 마지막 문자 뒤의 것을 가리키면서 시작 -> 계속 그렇게 되어야함

// insert는 괜춘
// erase가 좀 변경됨



// 2. t는 마지막 문자를 가리키면서 시작 -> 계속 그렇게 되어야함

// insert 변경
// erase 그대로

// 둘 다 안됨 ㄹㅈㄷ