#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int idx = 0;
    int sum = 0;
    int check = (int)s[12] - 48;

    for (int i = 0; i < 12; i++) {
        if (s[i] == '*') {
            idx = i;
        }
        else {
            if (i % 2 == 0)
                sum += (s[i] - 48);
            else
                sum += (s[i] - 48) * 3;
        }
    }

    int mul = (idx % 2 != 0) ? 3 : 1;
    for (int i = 0; i < 10; i++) {
        if ((sum + (i * mul) + check) % 10 == 0) {
            cout << i;
            break;
        }
    }

    return 0;
}