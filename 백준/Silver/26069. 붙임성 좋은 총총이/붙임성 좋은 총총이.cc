#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int cnt = 1;
    map<string, bool> m;
    m["ChongChong"] = true;

    while (t--) {
        string a, b;
        cin >> a >> b;

        if (m[a] && !m[b]) {
            m[b] = true;
            cnt++;
        }
        else if (!m[a] && m[b]) {
            m[a] = true;
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}