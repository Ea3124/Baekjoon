#include <iostream>

int main() {
    int  i, N;
    int grade_max=0;
    std::cin >> N;
    int C[N];
    float D[N];
    float sum, mean;
    for (i=0;i<N;i++) {
        std::cin>>C[i];
    }
    for (int j=0 ; j<N ; j++) {
        if (grade_max < C[j]) {
            grade_max = C[j];
        }
    }
    for(int k=0;k<N;k++){
        D[k] = C[k]/(float)grade_max * 100;
    }
    for (int m=0;m<N;m++){
        sum = sum+D[m];
    }
    mean = (float)sum/N;
        std::cout<<mean;
    return 0;
}