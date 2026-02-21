#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0;
    while (n--) {
        int x;
        cin >> x;

        bool is_prime = true;
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (x == 1)
            continue;
        else if (x == 2 || is_prime)
            cnt++;
    }

    cout << cnt;

    return 0;
}