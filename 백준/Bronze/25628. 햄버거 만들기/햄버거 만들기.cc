#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a / 2 < b) cout << a / 2;
    else cout << b;

    return 0;
}