#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int h, w, n;
        cin >> h >> w >> n;

        int x = (n % h != 0) ? n / h + 1 : n / h;
        int y = (n % h != 0) ? n % h : h;

        if (x < 10) {
            cout << y << 0 << x << '\n';
        }
        else {
            cout << y << x << '\n';
        }
    }

    return 0;
}