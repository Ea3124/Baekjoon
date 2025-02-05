#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A,B,C,res;
    int arr[10] = {};
    cin>>A>>B>>C;

    res = A*B*C;

    while (res>0){
        arr[(res % 10)]++;
        res = res/10;
    }

    for(int j=0; j<10; j++){
        cout<<arr[j]<<"\n";
    }

}