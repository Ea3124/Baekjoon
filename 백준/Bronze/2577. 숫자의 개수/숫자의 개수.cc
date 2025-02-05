#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A,B,C,res;
    int arr[11] = {0,0,0,0,0,0,0,0,0,0,0};
    cin>>A>>B>>C;

    res = A*B*C;

    for (int i=0; i<10; i++){
        arr[(res % 10)]++;
        res = res/10;
        if(res == 0) break;
    }

    for(int j=0; j<10; j++){
        cout<<arr[j]<<"\n";
    }

}