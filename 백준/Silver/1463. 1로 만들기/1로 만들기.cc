#include <iostream>
#include <algorithm>
using namespace std;

int mk1[1000001];

int dp_mk1(int n) {
    for (int i = 2; i <= n; i++) {
        mk1[i] = mk1[i - 1] + 1;
        if (i % 2 == 0) mk1[i] = min(mk1[i], mk1[i / 2] + 1);
        if (i % 3 == 0) mk1[i] = min(mk1[i], mk1[i / 3] + 1);
    }
    return mk1[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << dp_mk1(n);

    return 0;
}