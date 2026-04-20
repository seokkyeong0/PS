#include <iostream>
#include <cmath>
using namespace std;

long long f[100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }

    for (int i = 0; i < n; i++) {
        m -= (f[i] - 1);
    }

    if (m <= 0) cout << "DIMI";
    else cout << "OUT";

    return 0;
}