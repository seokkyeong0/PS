#include <iostream>
#include <map>
using namespace std;

using ull = unsigned long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    string s, p;
    map<string, string> mm;
    while (n--) {
        cin >> s >> p;
        mm[s] = p;
    }

    while (m--) {
        cin >> s;
        cout << mm[s] << '\n';
    }

    return 0;
}