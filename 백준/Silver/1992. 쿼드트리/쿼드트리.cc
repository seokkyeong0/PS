#include <iostream>
using namespace std;

int p[65][65];

void quad_tree(int n, int v, int h) {
    int val = p[v][h];
    bool p_check = true;

    int vs[2] = { v, v + n / 2 };
    int hs[2] = { h, h + n / 2 };

    if (n > 1) {
        for (int i = v; i < v + n; i++) {
            if (!p_check) break;
            for (int j = h; j < h + n; j++) {
                if (val != p[i][j]) {
                    p_check = false;
                }
            }
        }

        if (p_check) {
            if (val) cout << 1;
            else cout << 0;
        }
        else {
            cout << '(';
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    quad_tree(n / 2, vs[i], hs[j]);
                }
            }
            cout << ')';
        }
    }
    else {
        if (val) cout << 1;
        else cout << 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= n; j++) {
            p[i][j] = s[j - 1] - '0';
        }
    }

    quad_tree(n, 1, 1);

    return 0;
}