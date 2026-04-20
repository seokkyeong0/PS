#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int sum = i;
        int num = i;

        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum == n) {
            cout << i;
            return 0;
        }
    }

    cout << 0;
    return 0;
}