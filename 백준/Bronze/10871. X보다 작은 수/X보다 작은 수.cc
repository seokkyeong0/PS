#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> v;

    while (n--) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    for (auto i : v)
        if (i < x)
            cout << i << ' ';

    return 0;
}