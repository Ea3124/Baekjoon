#include <iostream>
#include <vector>
#include <array>

int main() {
    int i,j;
    int max_num=-1;
    int max_row, max_column;

    std::array<std::array<int, 9>, 9> myArray{};

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            std::cin>>myArray[i][j];
        }
    }

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(max_num < myArray[i][j]){
                max_num = myArray[i][j];
                max_row = i;
                max_column = j;
            }
        }
    }

    std::cout<<max_num<<"\n";
    std::cout<<max_row+1<<" "<<max_column+1;
    return 0;
}