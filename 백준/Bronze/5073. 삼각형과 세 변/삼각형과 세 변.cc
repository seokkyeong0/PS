#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        if (max({ a, b, c }) >= a + b + c - max({ a, b, c }))
            cout << "Invalid" << '\n';
        else if (a == b && b == c && a == c)
            cout << "Equilateral" << '\n';
        else if (a == b || b == c || a == c)
            cout << "Isosceles" << '\n';
        else if (a != b && b != c && a != c)
            cout << "Scalene" << '\n';
    }

    return 0;
}