#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x;
    cin >> n >> m;

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n * m; i++) {
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n * m; i++) {
        cin >> x;
        b.push_back(x);
    }

    for (int i = 0; i < n * m; i++) {
        cout << a[i] + b[i] << ' ';
        if ((i + 1) % m == 0)
            cout << '\n';
    }

    return 0;
}