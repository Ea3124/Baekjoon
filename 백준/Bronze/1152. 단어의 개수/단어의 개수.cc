
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    int nBlank = std::count(sentence.begin(), sentence.end(), ' ');
        if(sentence[0] == ' ') nBlank--;
        if(sentence[sentence.length()-1]==' ') nBlank--;
    std::cout<<nBlank+1;
    return 0;
}


// 늘 항상 기억할것 : getline: 공백포함 입력
// count : (시작지점, 종료지점, ' ')  --> 처음에서 끝까지 고백 개수 세기
