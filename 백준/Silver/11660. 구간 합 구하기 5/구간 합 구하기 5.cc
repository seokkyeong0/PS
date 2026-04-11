#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m;

    vector<int> v;
    v.push_back(0);

    for (int i = 1; i <= n * n; i++) {
        cin >> k;
        v.push_back(k + v[i - 1]);
    }

    while (m--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int p_sum = 0;

        for (int i = x1; i <= x2; i++) {
            p_sum += (v[n * (i - 1) + y2] - v[n * (i - 1) + (y1 - 1)]);
        }

        cout << p_sum << '\n';
    }

    return 0;
}