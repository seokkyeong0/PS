#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, x;
    ll prev, cur = 0;
    cin >> n >> m;

    vector<ll> cnt(m);
    for (int i = 0; i < n; i++) {
        cin >> x;
        prev = cur;
        cur = x + prev;
        cnt[cur % m]++;
    }

    ll result = cnt[0];
    for (int i = 0; i < m; i++) {
        result += (cnt[i] * (cnt[i] - 1)) / 2;
    }

    cout << result;

    return 0;
}