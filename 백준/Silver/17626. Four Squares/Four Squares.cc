#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int d[50001];

int dp_sqr(int n) {
    for (int i = 1; i <= n; i++) {
        vector<int> v;

        for (int j = 1; j * j <= n; j++) {
            if (i >= j * j)
                v.push_back(d[i - j * j] + 1);
        }

        d[i] = *min_element(v.begin(), v.end());
    }
    
    return d[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << dp_sqr(n);
    return 0;
}