#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, m;
    cin >> h >> m;

    if (m - 45 < 0) {
        m += 15;
        h -= 1;
    }
    else {
        m -= 45;
    }

    if (h < 0) {
        h = 23;
    }

    cout << h << ' ' << m;

    return 0;
}