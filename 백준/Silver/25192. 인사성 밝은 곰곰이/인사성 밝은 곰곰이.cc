#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int cnt = 0;
    set<string> s;

    while (t--) {
        string x;
        cin >> x;

        if (x == "ENTER") {
            s.clear();
        }
        else if (!s.count(x)) {
            s.insert(x);
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}