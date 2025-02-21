#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> V(n, 0);
    stack<pair<int, int>> S;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        while (!S.empty() && S.top().first < num) {
            S.pop();
        }

        V[i] = S.empty() ? 0 : S.top().second;

        S.push({num, i + 1});
    }

    for (auto t : V) {
        cout << t << " ";
    }
}
