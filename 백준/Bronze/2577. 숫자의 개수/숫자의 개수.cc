#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    string s = to_string(a * b * c);
    int n[10] = { 0 };

    for (auto c : s) {
        n[c - 48]++;
    }

    for (auto i : n) {
        cout << i << '\n';
    }

    return 0;
}