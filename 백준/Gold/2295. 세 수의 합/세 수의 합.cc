#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v, tmp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            tmp.push_back(v[i] + v[j]);
        }
    }

    sort(tmp.begin(), tmp.end());

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (binary_search(tmp.begin(), tmp.end(), v[i] - v[j])) {
                cout << v[i];
                return 0;
            }
        }
    }
}