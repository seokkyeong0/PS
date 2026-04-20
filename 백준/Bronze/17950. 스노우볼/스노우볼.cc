#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, x, s;
    cin >> h >> x;

    vector<int> v;
    while (h--) {
        cin >> s;
        v.push_back(s);
    }

    ll result = 0;
    ll m = x;
    for (int i = 0; i < v.size(); i++) {
        result += (v[i] * m) % 1000000007;
        result %= 1000000007;
        m *= x;
        m %= 1000000007;
    }

    cout << result;

    return 0;
}