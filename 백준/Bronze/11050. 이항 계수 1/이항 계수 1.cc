#include <iostream>
using namespace std;

int comb(int a, int b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    cout << comb(n, k);
    
    return 0;
}

int comb(int a, int b) {
    int x = 1, y = 1;

    for (int i = a; i > a - b; i--) {
        x *= i;
    }

    for (int i = b; i > 0; i--) {
        y *= i;
    }

    return x / y;
}