#include <iostream>
#include <vector>
using namespace std;

int a[100001], d[100001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, i, j;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[i] = d[i - 1] + a[i];
    }

    while (m--) {
        cin >> i >> j;
        cout << d[j] - d[i - 1] << '\n';
    }

    return 0;
}