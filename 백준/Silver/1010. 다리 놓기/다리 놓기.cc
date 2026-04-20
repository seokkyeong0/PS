#include <iostream>
using namespace std;

typedef unsigned long long ull;

ull comb(ull n, ull k);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ull n, m;
        cin >> n >> m;
        cout << comb(m, n) << '\n';
    }
    
    return 0;
}

ull comb(ull n, ull k) {
    if (n == k) return 1;

    ull res = 1;

    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }

    return res;
}