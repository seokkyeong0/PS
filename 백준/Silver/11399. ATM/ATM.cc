#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

using ull = unsigned long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    vector<ull> v;
    cin >> n;

    while (n--) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    ull total = 0;
    for (int i = 0; i < v.size(); i++) {
        ull tmp = 0;
        for (int j = 0; j <= i; j++) {
            tmp += v[j];
        }
        total += tmp;
    }

    cout << total;

    return 0;
}