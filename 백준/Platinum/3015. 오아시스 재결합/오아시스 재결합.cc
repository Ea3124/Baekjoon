#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    cin >> n;

    stack<pair<int, int>> S;
    long long answer = 0;

    for (int i = 0; i < n; i++) {
        cin >> num;

        int count = 1;  // 현재 숫자의 개수

        // 스택에서 현재 사람보다 작은 사람들을 제거하며 볼 수 있는 쌍 카운트 증가
        while (!S.empty() && S.top().first <= num) {
            answer += S.top().second;
            if (S.top().first == num) count += S.top().second; // 같은 키인 경우 count 증가
            S.pop();
        }

        if (!S.empty()) answer++;  // 스택이 비어있지 않다면 현재 사람은 앞사람과 볼 수 있음

        S.push({num, count}); // 현재 사람 스택에 추가
    }

    cout << answer << "\n";
}
