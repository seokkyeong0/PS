#include <iostream>
using namespace std;

int cnt_w = 0;
int cnt_b = 0;

int p[129][129];

void cnt_paper(int n, int v, int h) {
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
            if (val) cnt_b++;
            else cnt_w++;
        }
        else {
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    cnt_paper(n / 2, vs[i], hs[j]);
                }
            }
        }
    }
    else {
        if (val) cnt_b++;
        else cnt_w++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> p[i][j];
        }
    }

    cnt_paper(n, 1, 1);

    cout << cnt_w << '\n';
    cout << cnt_b << '\n';

    return 0;
}