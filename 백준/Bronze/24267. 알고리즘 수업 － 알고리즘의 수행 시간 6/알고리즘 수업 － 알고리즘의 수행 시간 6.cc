#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long n;
    cin >> n;

    unsigned long long cnt = 0;

    for (int i = 1; i < n - 1; i++) {
        cnt += ((n - 1) - i) * (n - i) / 2;
    }

    cout << cnt << '\n' << 3;

    return 0;
}