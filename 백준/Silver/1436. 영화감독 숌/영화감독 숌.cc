
#include <iostream>
#include <string>

int RecursiveSixFunction(int N) {

    int powerOfTen = 1, six_num = 0, compare = 0;
    std::string six_string = std::to_string(N);
    
    for(int k=0;k<six_string.length();k++){
        if((N/powerOfTen)%10 == 6) six_num++;
        powerOfTen *= 10;
    }
    if (six_num >= 3){
        for(int i=0;i<six_string.length()-2;i++) {
//            if (six_string[i] == six_string[i + 1] && six_string[i] == six_string[i + 2] && six_string[i] == '6') sss = 1;
//            else sss =0;
            if (i + 2 < six_string.length() && six_string[i] == '6' && six_string[i + 1] == '6' && six_string[i + 2] == '6') {
                compare = 1;
                break; // 세 번 연속으로 '6'이 나타났으면 더 이상 확인할 필요가 없으므로 반복문 종료
            } else compare = 0;
        }
    }
    return compare;
}
int main() {
    int film_num;
    std::cin >> film_num;
    int evil_num = 666;
    int *film = new int[film_num];
    for (int i = 0; i < film_num; i++) {
        while (true) {
            if (RecursiveSixFunction(evil_num) == 1) {
                film[i] = evil_num;
                evil_num++;
                break;
            } else evil_num++;
        }
    }
    std::cout<<film[film_num-1];
    return 0;
}

