#include <iostream>
using namespace std;

int dp_tiling(int n) {
    int t[1001] = { 0 };
    t[1] = 1;
    t[2] = 2;
    for (int i = 3; i <= n; i++) {
        t[i] = (t[i - 1] + t[i - 2]) % 10007;
    }
    return t[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << dp_tiling(n);

    return 0;
}