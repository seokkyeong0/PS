#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    int a, b;
    int c, d;

    cin >> x >> y;
    cin >> a >> b;
    cin >> c >> d;

    if (x == a)
        cout << c << ' ';
    else if (x == c)
        cout << a << ' ';
    else
        cout << x << ' ';

    if (y == b)
        cout << d;
    else if (y == d)
        cout << b;
    else
        cout << y;

    return 0;
}