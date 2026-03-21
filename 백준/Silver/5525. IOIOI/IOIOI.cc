#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    string str, ref = "IOI";
    cin >> n >> s >> str;

    for (int i = 2; i <= n; i++) {
        ref += "OI";
    }

    int cnt = 0;
    for (int i = 0; i <= s - (2 * n); i++) {
        if (str.substr(i, 2 * n + 1) == ref) {
            cnt += 1;
        }
    }

    cout << cnt;

    return 0;
}