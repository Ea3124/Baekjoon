#include <iostream>

int main() {
    int num;
    int xyArea[100][100]={0,};
    std::cin>>num;
    int width[num], height[num];
    int area = 0;

    for(int i=0;i<num;i++) {
        std::cin>>width[i]>>height[i];
        for(int k=0;k<10;k++){
            for(int m=0;m<10;m++){
                xyArea[width[i]+k][height[i]+m]++;
            }
        }
    }
    for(int x=0;x<100;x++){
        for(int y=0;y<100;y++){
            if(xyArea[x][y] > 0){
                area++;
            }
        }
    }

    std::cout<<area;

    return 0;
}