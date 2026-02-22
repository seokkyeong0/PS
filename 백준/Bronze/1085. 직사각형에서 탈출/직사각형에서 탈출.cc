#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int a = (w - x > x) ? x : w - x;
    int b = (h - y > y) ? y : h - y;

    if (a > b)
        cout << b;
    else
        cout << a;

    return 0;
}