#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int s[10][10];
vector<pair<int, int>> blanks;

bool isValid(int r, int c, int num) {
    for (int i = 1; i <= 9; i++) {
        if (s[r][i] == num || s[i][c] == num) 
            return false;
    }

    int start_r = ((r - 1) / 3) * 3 + 1;
    int start_c = ((c - 1) / 3) * 3 + 1;
    for (int i = start_r; i < start_r + 3; i++) {
        for (int j = start_c; j < start_c + 3; j++) {
            if (s[i][j] == num) 
                return false;
        }
    }

    return true;
}

void solve(int idx) {
    if (idx == blanks.size()) {
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                cout << s[i][j] << ' ';
            }
            cout << '\n';
        }
        exit(0);
    }

    int r = blanks[idx].first;
    int c = blanks[idx].second;

    for (int num = 1; num <= 9; num++) {
        if (isValid(r, c, num)) {
            s[r][c] = num;
            solve(idx + 1);
            s[r][c] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cin >> s[i][j];
            if (s[i][j] == 0) 
                blanks.push_back({ i, j });
        }
    }

    solve(0);

    return 0;
}