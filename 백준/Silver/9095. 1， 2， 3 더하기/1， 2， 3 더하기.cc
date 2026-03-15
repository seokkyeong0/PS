#include <iostream>
#include <algorithm>
using namespace std;

int dp_add(int n) {
    int add[11];
    add[1] = 1;
    add[2] = 2;
    add[3] = 4;
    for (int i = 4; i <= n; i++) {
        add[i] = add[i - 1] + add[i - 2] + add[i - 3];
    }
    return add[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        cout << dp_add(n) << '\n';
    }

    return 0;
}