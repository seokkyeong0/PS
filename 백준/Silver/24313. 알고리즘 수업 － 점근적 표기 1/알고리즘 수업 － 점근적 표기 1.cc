#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, n;
    cin >> a >> b >> c >> n;

    bool is_sat = true;

    for (int i = n; i <= 100; i++) {
        if (c * i >= a * i + b)
            continue;
        else {
            is_sat = false;
            break;
        }
    }

    if (is_sat)
        cout << 1;
    else
        cout << 0;

    return 0;
}