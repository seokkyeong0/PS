#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n != 1) {
        int d = 2;
        while (true) {
            if (n % d == 0) {
                cout << d << '\n';
                n /= d;
                break;
            }
            else {
                d++;
            }
        }
    }

    return 0;
}