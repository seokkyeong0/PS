#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> v;

    while (t--) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << v[0] * v[v.size() - 1];
    
    return 0;
}