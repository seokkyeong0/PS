#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x;
    set<int> s;

    cin >> n;
    while (n--) {
        cin >> x;
        s.insert(x);
    }

    cin >> m;
    while (m--) {
        cin >> x;
        if (s.count(x)) {
            cout << 1 << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
    
    return 0;
}