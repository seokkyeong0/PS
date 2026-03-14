#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
ll ab_mod(ll a, ll b, ll c) {
    ll val = 1;
    if (a > c) a %= c;
    while (b > 0) {
        if (b % 2 != 0) {
            val = val * a % c;
        }
        a = a * a % c;
        b /= 2;
    }

    return val % c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    cin >> a >> b >> c;
    cout << ab_mod(a, b, c);

    return 0;
}