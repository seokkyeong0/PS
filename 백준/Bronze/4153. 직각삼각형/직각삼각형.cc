#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }

    return 0;
}