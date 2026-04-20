#include <iostream>
#include <algorithm>
using namespace std;

int a[100001], d[100001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = a[0];
    d[0] = a[0];
    for (int i = 1; i < n; i++) {
        d[i] = max(a[i], d[i - 1] + a[i]);
        ans = max(ans, d[i]);
    }

    cout << ans;

    return 0;
}