#include <iostream>
#include <cmath>
using namespace std;

int n, cnt;
int col[15];

bool isPromising(int r) {
    for (int i = 0; i < r; i++) {
        if (col[r] == col[i] || abs(col[r] - col[i]) == (r - i)) {
            return false;
        }
    }
    return true;
}

void nqueen(int k) {
    if (k == n) {
        cnt++;
        return;
    }

    for (int i = 0; i < n; i++) {
        col[k] = i;
        if (isPromising(k)) {
            nqueen(k + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    nqueen(0);
    cout << cnt;

    return 0;
}