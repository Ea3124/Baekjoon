
#include <iostream>

int main() {
    int i,j,k,m,width, height;  //white = 0, black = 1
    std::cin>>width>>height;
    int area[width][height];
    char color;
    int min_count =64;

    for(i=0;i<width;i++){
        for(j=0;j<height;j++){
            std::cin>>color;
            if(color =='W') area[i][j] = 0;
            else area[i][j] = 1;
        }
    }
    for(i=0;i<=width-8;i++){
        for(j=0;j<=height-8;j++){
            int count=0;
            int min_count_a = 0, min_count_b = 0;
            if(area[i][j] == 0){
                for(k=0;k<8;k++){
                    for(m=0;m<8;m++){
                        if(k%2 == m%2){
                            if(area[i+k][j+m] != 0) min_count_a++;
                            else if(area[i+k][j+m] != 1) min_count_b++;
                        }
                        else if (k%2 != m%2){
                            if(area[i+k][j+m] != 1) min_count_a++;
                            else if(area[i+k][j+m] != 0) min_count_b++;
                        }
                    }
                }
            }
            else {
                for(k=0;k<8;k++){
                    for(m=0;m<8;m++){
                        if(k%2 != m%2){
                            if(area[i+k][j+m] != 0) min_count_a++;
                            else if(area[i+k][j+m] != 1) min_count_b++;
                        }
                        else if(k%2 == m%2){
                            if(area[i+k][j+m] != 1) min_count_a++;
                            else if(area[i+k][j+m] != 0) min_count_b++;
                        }
                    }
                }
            }

            if(min_count_a >= min_count_b) count = min_count_b;
            else count = min_count_a;
            if(min_count >= count) min_count = count;
        }
    }

    std::cout<<min_count;
    return 0;
}
