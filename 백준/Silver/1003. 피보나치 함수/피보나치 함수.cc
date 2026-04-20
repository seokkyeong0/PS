#include <iostream>
using namespace std;

void fibo_dp(int n) {
    int fibo_0[41] = { 0 };
    int fibo_1[41] = { 0 };

    fibo_0[0] = 1;
    fibo_0[1] = 0;
    fibo_0[2] = 1;

    fibo_1[0] = 0;
    fibo_1[1] = 1;
    fibo_1[2] = 1;

    for (int i = 3; i <= n; i++) {
        fibo_0[i] = fibo_0[i - 1] + fibo_0[i - 2];
        fibo_1[i] = fibo_1[i - 1] + fibo_1[i - 2];
    }

    cout << fibo_0[n] << ' ' << fibo_1[n] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        fibo_dp(n);
    }

    return 0;
}