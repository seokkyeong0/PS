#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;

    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        n += x * x;
    }

    cout << n % 10;

    return 0;
}