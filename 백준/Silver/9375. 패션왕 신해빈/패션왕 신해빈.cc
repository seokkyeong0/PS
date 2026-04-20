#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        map<string, int> m;

        for (int i = 0; i < n; i++) {
            string a, b;
            cin >> a >> b;
            if (!m.count(b)) m[b] = 1;
            else m[b]++;
        }

        int val = 1;
        for (pair<string, int> i : m) {
            val *= (i.second + 1);
        }

        cout << val - 1 << '\n';
    }
    
    return 0;
}