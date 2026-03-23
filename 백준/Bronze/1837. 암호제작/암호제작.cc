#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n; int k;
    cin >> n >> k;

    vector<bool> is_prime(k + 1, true);

    for (int i = 2; i * i <= k; i++) {
        if (is_prime[i]) {
            for (int j = i * 2; j <= k; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i < k; i++) {
        if (is_prime[i]) {
            int sum = 0;

            for (auto c : n) {
                sum = ((sum * 10) + (c - '0')) % i;
            }

            if (sum == 0) {
                cout << "BAD " << i;
                return 0;
            }
        }
    }

    cout << "GOOD";

    return 0;
}