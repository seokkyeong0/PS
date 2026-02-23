#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int d1 = 0, d2 = 0, d3 = 0, d4 = 0;
    int d5 = 0, d6 = 0, d7 = 0;

    for (int i = 1; i < n; i++) {
        if (i < 10) {
            d1 = i;
        }
        else if (i < 100) {
            d2 = i / 10;
            d1 = i % 10;
        }
        else if (i < 1000) {
            d3 = i / 100;
            d2 = (i / 10) % 10;
            d1 = i % 10;
        }
        else if (i < 10000) {
            d4 = i / 1000;
            d3 = (i / 100) % 10;
            d2 = (i / 10) % 10;
            d1 = i % 10;
        }
        else if (i < 100000) {
            d5 = i / 10000;
            d4 = (i / 1000) % 10;
            d3 = (i / 100) % 10;
            d2 = (i / 10) % 10;
            d1 = i % 10;
        }
        else if (i < 1000000) {
            d6 = i / 100000;
            d5 = (i / 10000) % 10;
            d4 = (i / 1000) % 10;
            d3 = (i / 100) % 10;
            d2 = (i / 10) % 10;
            d1 = i % 10;
        }
        else {
            d7 = 1;
        }

        if (i + d1 + d2 + d3 + d4 + d5 + d6 + d7 == n) {
            cout << i;
            return 0;
        }
    }

    cout << 0;
    return 0;
}