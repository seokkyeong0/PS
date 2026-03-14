#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, x;
    cin >> m;

    set<int> s;

    while (m--) {
        string t;
        cin >> t;
        if (t == "add") {
            cin >> x;
            s.insert(x);
        } 
        else if (t == "remove") {
            cin >> x;
            s.erase(x);
        }
        else if (t == "check") {
            cin >> x;
            if (s.count(x)) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (t == "toggle") {
            cin >> x;
            if (s.count(x)) s.erase(x);
            else s.insert(x);
        }
        else if (t == "all") {
            for (int i = 1; i <= 20; i++) {
                if (!s.count(i)) {
                    s.insert(i);
                }
            }
        }
        else if (t == "empty") {
            s.clear();
        }
    }

    return 0;
}