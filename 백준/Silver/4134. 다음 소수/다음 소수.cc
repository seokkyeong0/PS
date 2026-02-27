#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;

        if (n == 0 || n == 1) {
            cout << 2 << '\n';
        }
        else {
            for (long long i = n; i <= 4294967295; i++) {
                bool flag = true;

                for (long long j = 2; j <= sqrt(i); j++) {
                    if (i % j == 0) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    cout << i << '\n';
                    break;
                }
            }
        }
    }
    
    return 0;
}