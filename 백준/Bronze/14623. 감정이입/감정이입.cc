#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    long long x = 0, y = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '1')
            x += pow(2, a.size() - 1 - i);
    }

    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '1')
            y += pow(2, b.size() - 1 - i);
    }

    long long r = x * y;
    vector<long long> v;
    while (r > 0) {
        v.push_back(r % 2);
        r /= 2;
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i];
    }

    return 0;
}