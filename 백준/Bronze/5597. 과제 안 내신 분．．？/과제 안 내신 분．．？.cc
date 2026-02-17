#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;

    for (int i = 0; i < 28; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    for (int i = 1; i < 31; i++) {
        if (find(v.begin(), v.end(), i) == v.end())
            cout << i << '\n';
    }

    return 0;
}