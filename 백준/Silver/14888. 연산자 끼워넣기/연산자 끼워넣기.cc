#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, x;
vector<int> num;
int operators[4];
int max_val = -2147483647;
int min_val = 2147483647;

void solve(int k, int cur_val) {
    if (k == n) {
        max_val = max(max_val, cur_val);
        min_val = min(min_val, cur_val);
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (operators[i] > 0) {
            operators[i]--;
            if (i == 0) solve(k + 1, cur_val + num[k]);
            else if (i == 1) solve(k + 1, cur_val - num[k]);
            else if (i == 2) solve(k + 1, cur_val * num[k]);
            else if (i == 3) solve(k + 1, cur_val / num[k]);
            operators[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        num.push_back(x);
    }

    for (int i = 0; i < 4; i++) {
        cin >> operators[i];
    }

    solve(1, num[0]);
    cout << max_val << '\n' << min_val;

    return 0;
}