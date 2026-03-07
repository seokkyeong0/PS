#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n;

    vector<int> v;
    while (n--) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int idx_min = round(v.size() * (15.0 / 100.0));
    int idx_max = v.size() - idx_min;

    double sum = 0;
    double div = idx_max - idx_min;
    for (int i = idx_min; i < idx_max; i++) {
        sum += v[i];
    }

    if (v.size() == 0)
        cout << 0;
    else
        cout << round(sum / div);
    
    return 0;
}