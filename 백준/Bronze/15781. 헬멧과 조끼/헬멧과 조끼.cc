#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x;
    cin >> n >> m;

    vector<int> h;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> x;
        h.push_back(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        v.push_back(x);
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max < h[i] + v[j])
                max = h[i] + v[j];
        }
    }

    cout << max;

    return 0;
}