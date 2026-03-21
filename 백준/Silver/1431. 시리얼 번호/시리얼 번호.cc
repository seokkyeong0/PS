#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int c_sum(string s) {
    int sum = 0;
    for (auto c : s) {
        if (c >= '0' && c <= '9')
            sum += c - '0';
    }
    return sum;
}

bool serial_num(string a, string b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    else if (a.size() == b.size()) {
        if (c_sum(a) == c_sum(b)) return a < b;
        else return c_sum(a) < c_sum(b);
    }
    else {
        return a < b;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v;
    while (n--) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), serial_num);

    for (auto s : v) {
        cout << s << '\n';
    }

    return 0;
}