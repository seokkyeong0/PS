#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            cnt++;
            if (i % 25 == 0)
                cnt++;
            if (i % 125 == 0)
                cnt++;
        }
    }

    cout << cnt;

    return 0;
}