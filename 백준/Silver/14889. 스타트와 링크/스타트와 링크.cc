#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int n, x;
int w[21][21];
int used[101];
int min_val = 2147483647;

void solve(int k, int c) {
    if (k == n / 2) {
        vector<int> sv, lv;

        for (int i = 1; i <= n; i++) {
            if (used[i]) sv.push_back(i);
            else lv.push_back(i);
        }

        int s = 0;
        int l = 0;

        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                s += w[sv[i]][sv[j]];
                l += w[lv[i]][lv[j]];
            }
        }

        min_val = min(min_val, abs(s - l));
        return;
    }

    for (int i = c; i <= n; i++) {
        if (!used[i]) {
            used[i] = 1;
            solve(k + 1, i + 1);
            used[i] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> w[i][j];
        }
    }

    used[1] = 1;
    solve(1, 2);
    cout << min_val;

    return 0;
}