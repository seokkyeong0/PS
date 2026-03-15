#include <iostream>
using namespace std;

using ll = long long;

ll padovan(int n) {
    ll p[101];
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 2;
    for (int i = 5; i <= n; i++) {
        p[i] = p[i - 2] + p[i - 3];
    }
    return p[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        cout << padovan(n) << '\n';
    }

    return 0;
}