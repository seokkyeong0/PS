#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> is_prime(246912 + 1, true);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p <= sqrt(246912); p++) {
        if (is_prime[p]) {
            for (int i = p * 2; i <= 246912; i += p) {
                is_prime[i] = false;
            }
        }
    }

    while (true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }

        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++) {
            if (is_prime[i]) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
    
    return 0;
}