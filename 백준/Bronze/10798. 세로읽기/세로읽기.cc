#include <iostream>
#include <cstring>

int main() {
    int i, j,k;


    char input[5][16];
    for (k = 0; k < 5; k++) {
        std::cin.getline(input[k], 16);
    }
    for(i=0;i<15;i++) {
        for (j = 0; j < 5; j++) {
            if (i >= strlen(input[j]))
                continue;
            std::cout << input[j][i];
        }
    }
    return 0;
}