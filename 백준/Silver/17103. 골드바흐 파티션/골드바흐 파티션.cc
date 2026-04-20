#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> is_prime(1000000 + 1, true);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p <= sqrt(1000000); p++) {
        if (is_prime[p]) {
            for (int i = p * 2; i <= 1000000; i += p) {
                is_prime[i] = false;
            }
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int cnt = 0;

        for (int i = 2; i <= n / 2; i++) {
            if (is_prime[i] && is_prime[n - i]) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
    
    return 0;
}