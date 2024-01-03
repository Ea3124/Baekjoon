#include <iostream>
#include <string>

int main() {
    std::string c_word;
    std::cin >> c_word;
    int count_length = c_word.length();
    char count_max_char =0;

    for (int i = 0; i < c_word.length(); ++i) {
        if (c_word[i] == 'c') {
            if(c_word[i+1] == '='){
                count_length--;
            }
            if(c_word[i+1] == '-'){
                count_length--;
            }
        }

        if (c_word[i] == 'd') {
            if(c_word[i+1] == 'z'&&c_word[i+2] =='='){
                count_length--;
            }
            if(c_word[i+1] == '-'){
                count_length--;
            }
        }
        if (c_word[i] == 'l') {
            if(c_word[i+1] == 'j'){
                count_length--;
            }
        }
        if (c_word[i] == 'n') {
            if(c_word[i+1] == 'j'){
                count_length--;
            }
        }
        if (c_word[i] == 's') {
            if(c_word[i+1] == '='){
                count_length--;
            }
        }
        if (c_word[i] == 'z') {
            if(c_word[i+1] == '='){
                count_length--;
            }
        }
    }

    std::cout<<count_length;
    return 0;
}