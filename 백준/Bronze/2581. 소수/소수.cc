#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int sum = 0;
    int min = 0;
    bool is_min = true;

    for (int x = n; x <= m; x++) {
        bool is_prime = true;
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (x == 1)
            continue;
        else if (x == 2 || is_prime) {
            sum += x;
            if (is_min) {
                min = x;
                is_min = false;
            }
        }
    }

    if (sum == 0)
        cout << -1;
    else
        cout << sum << '\n' << min;

    return 0;
}