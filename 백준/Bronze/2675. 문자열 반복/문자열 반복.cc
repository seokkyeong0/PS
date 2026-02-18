#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        for (auto c : s) {
            for (int i = 0; i < n; i++)
                cout << c;
        }

        cout << '\n';
    }

    return 0;
}