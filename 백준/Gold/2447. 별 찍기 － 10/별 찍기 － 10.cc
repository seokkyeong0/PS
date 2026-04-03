#include <iostream>
using namespace std;

char p[2188][2188];

void star_10(int n, int v, int h) {

    int vs[3] = { v, v + n / 3, v + (n * 2) / 3 };
    int hs[3] = { h, h + n / 3, h + (n * 2) / 3 };

    if (n >= 3) {
        for (int i = vs[1]; i < vs[1] + (n / 3); i++) {
            for (int j = hs[1]; j < hs[1] + (n / 3); j++) {
                p[i][j] = ' ';
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                star_10(n / 3, vs[i], hs[j]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            p[i][j] = '*';
        }
    }

    star_10(n, 1, 1);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << p[i][j];
        }
        cout << '\n';
    }

    return 0;
}