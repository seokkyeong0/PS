#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int c;
        cin >> c;

        int q = c / 25; c %= 25;
        int d = c / 10; c %= 10;
        int n = c / 5;  c %= 5;
        int p = c / 1;  c %= 1;

        cout << q << ' ' << d << ' ' << n << ' ' << p << '\n';
    }

    return 0;
}