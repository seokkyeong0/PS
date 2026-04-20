#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, a;
    cin >> n >> k;
    
    vector<int> v;

    while (n--) {
        cin >> a;
        v.push_back(a);
    }

    int idx = v.size() - 1;
    int cnt = 0;
    while (k != 0) {
        if (k >= v[idx]) {
            k -= v[idx];
            cnt++;
        }
        else idx--;
    }

    cout << cnt;

    return 0;
}