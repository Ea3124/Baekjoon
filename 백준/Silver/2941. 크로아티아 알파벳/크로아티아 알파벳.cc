#include <iostream>
#include <string>

int main() {
    std::string c_word;
    std::cin >> c_word;
    int count_length = c_word.length();
    char count_max_char =0;

    for (int i = 0; i < c_word.length(); ++i) {
        if (c_word[i] == 'c' && (c_word[i+1] == '=' || c_word[i+1] == '-')) count_length--;

        if (c_word[i] == 'd' && ((c_word[i+1] == 'z'&&c_word[i+2] =='=')|| c_word[i+1] == '-')) count_length--;

        if (c_word[i] == 'l' && c_word[i+1] == 'j') count_length--;

        if (c_word[i] == 'n' && c_word[i+1] == 'j') count_length--;

        if (c_word[i] == 's' && c_word[i+1] == '=') count_length--;

        if (c_word[i] == 'z' && c_word[i+1] == '=') count_length--;
    }

    std::cout<<count_length;
    return 0;
}