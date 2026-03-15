#include <iostream>
using namespace std;

int tile[1000001];

int tile_01(int n) {
    tile[1] = 1;
    tile[2] = 2;
    tile[3] = 3;
    tile[4] = 5;
    for (int i = 5; i <= n; i++) {
        tile[i] = (tile[i - 1] + tile[i - 2]) % 15746;
    }
    return tile[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << tile_01(n);

    return 0;
}