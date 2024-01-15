    #include <iostream>

    int main() {
        int N,j,k;
        std::cin>>N;
        for(int i=1;i<=N;i++){
            for(j=N-i;j>0;j--){
                std::cout<<' ';
            }
            for(k=1;k<=i;k++) {
                std::cout << '*';
            }
            std::cout<<'\n';
        }
        return 0;
    }
