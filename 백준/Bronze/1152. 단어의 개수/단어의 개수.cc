
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