#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a = n / 300; n %= 300;
    int b = n / 60; n %= 60;
    int c = n / 10; n %= 10;

    if (n == 0)
        cout << a << ' ' << b << ' ' << c;
    else
        cout << -1;

    return 0;
}