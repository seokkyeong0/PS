#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, c;
    cin >> p >> c;
    cout << ((p > c) ? 500 : 0) + 50 * p - 10 * c;

    return 0;
}