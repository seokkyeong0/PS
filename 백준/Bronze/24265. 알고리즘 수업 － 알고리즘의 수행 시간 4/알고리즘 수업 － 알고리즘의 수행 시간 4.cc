#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long cnt = 0;
    while (n--) {
        cnt += n;
    }

    cout << cnt << '\n' << 2;

    return 0;
}