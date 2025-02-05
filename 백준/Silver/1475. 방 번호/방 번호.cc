#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num, max=0;
    cin >> num;

    int arr[10] = {};

    while (num > 0) {
        arr[(num % 10)]++;
        num = num / 10;
    }

    arr[9] = (arr[9] + arr[6]) / 2 + (arr[9] + arr[6]) % 2;
    arr[6] = 0;

    for (int j = 0; j < 10; j++) {
        if (max < arr[j]) max = arr[j];
    }
        cout << max;
}