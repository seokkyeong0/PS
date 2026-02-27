#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> s;
    for (int i = 1; i < v.size(); i++) {
        s.push_back(v[i] - v[i - 1]);
    }
    
    int g = gcd(s[0], s[1]);

    if (s.size() > 2) {
        for (int i = 2; i < s.size(); i++) {
            g = gcd(g, s[i]);
        }
    }

    int cnt = 0;
    for (auto i : s) {
        if (i > g) {
            cnt += (i / g) - 1;
        }
    }

    cout << cnt;
    
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}