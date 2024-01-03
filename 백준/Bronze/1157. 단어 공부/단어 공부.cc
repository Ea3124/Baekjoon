#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cin >> word;
    int count_max =0;
    char count_max_char =0;

    for (int i = 0; i < word.length(); ++i) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] + 32;
        }
    }

    int word_count[26] = {0};

    for(int j=0;j<word.length();j++){
        word_count[word[j]-97]++;
    }

    for(int k=0;k<26;k++){
        if(word_count[k]!=0){
            if(count_max < word_count[k]) {
                count_max = word_count[k];
                count_max_char = k+65;
            }
        }
    }

    for(int m=0;m<26;m++){
        if(count_max == word_count[m] && m != count_max_char-65) count_max_char = '?';
    }

    std::cout<<count_max_char;
    return 0;
}