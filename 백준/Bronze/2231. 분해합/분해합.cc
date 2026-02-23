#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool is_exist = false;
    vector<int> v;

    for (int i = 1; i <= n; i++) {
        int s = 0;

        for (int c = (to_string(i)).size() - 1; c >= 0; c--) {
            s += (to_string(i))[c] - 48;
        }

        if (n == i + s) {
            v.push_back(i);
            is_exist = true;
        }
    }

    if (is_exist)
        cout << *min_element(v.begin(), v.end());
    else
        cout << 0;

    return 0;
}