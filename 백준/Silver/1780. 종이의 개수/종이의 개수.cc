#include <iostream>
using namespace std;

int cnt_m = 0;
int cnt_z = 0;
int cnt_p = 0;

int p[2188][2188];

void cut_paper(int n, int v, int h) {

    int pc = p[v][h];
    bool p_check = true;

    int vp[3] = {
        v, v + n / 3, v + ((n / 3) * 2)
    };

    int hp[3] = {
        h, h + n / 3, h + ((n / 3) * 2),
    };

    if (n > 1) {
        for (int i = v; i < v + n; i++) {
            if (!p_check) break;
            for (int j = h; j < h + n; j++) {
                if (pc != p[i][j]) {
                    p_check = false;
                }
            }
        }

        if (p_check) {
            if (pc == -1) cnt_m += 1;
            else if (pc == 0) cnt_z += 1;
            else if (pc == 1) cnt_p += 1;
        }
        else {
            cut_paper(n / 3, vp[0], hp[0]);
            cut_paper(n / 3, vp[0], hp[1]);
            cut_paper(n / 3, vp[0], hp[2]);
            cut_paper(n / 3, vp[1], hp[0]);
            cut_paper(n / 3, vp[1], hp[1]);
            cut_paper(n / 3, vp[1], hp[2]);
            cut_paper(n / 3, vp[2], hp[0]);
            cut_paper(n / 3, vp[2], hp[1]);
            cut_paper(n / 3, vp[2], hp[2]);
        }
    }
    else {
        if (pc == -1) cnt_m += 1;
        else if (pc == 0) cnt_z += 1;
        else if (pc == 1) cnt_p += 1;
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

    cut_paper(n, 1, 1);

    cout << cnt_m << '\n';
    cout << cnt_z << '\n';
    cout << cnt_p << '\n';

    return 0;
}