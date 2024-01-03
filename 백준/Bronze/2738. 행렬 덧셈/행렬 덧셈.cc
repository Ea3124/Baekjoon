#include <iostream>
#include <vector>

int main() {
    int i,j;
    int m, k;
    std::cin >> m >> k;

    // 각 배열을 중괄호 초기화를 사용하여 초기화
    std::vector<std::vector<int>> myArray1(m, std::vector<int>(k)),
            myArray2(m, std::vector<int>(k)),
            myArray3(m, std::vector<int>(k));

    for(i=0;i<m;i++){
        for(j=0;j<k;j++){
            std::cin>>myArray1[i][j];
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<k;j++){
            std::cin>>myArray2[i][j];
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<k;j++){
            myArray3[i][j] = myArray2[i][j]+myArray1[i][j];
            std::cout<<myArray3[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}