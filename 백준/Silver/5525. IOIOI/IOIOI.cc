#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    string str;
    cin >> n >> s >> str;

    int cnt = 0;
    for (int i = 0; i < s; i++) {
        int streak = 0;
        if (str[i] == 'I') {
            while (i + 2 < s && str[i + 1] == 'O' && str[i + 2] == 'I') {
                streak++;
                if (streak >= n) {
                    cnt++;
                }
                i += 2;
            }
        }
    }

    cout << cnt;

    return 0;
}