#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long n;
    cin >> n;

    cout << (n - 2) * (n - 1) * n / 6 << '\n' << 3;

    return 0;
}