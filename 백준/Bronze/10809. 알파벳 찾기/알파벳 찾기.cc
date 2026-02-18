#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int a[26] = {0};
    for (int i = 0; i < 26; i++) {
        a[i] = -1;
    }

    for (int i = 0; i < s.size(); i++) {
        if (a[s[i] - 97] == -1) {
            a[s[i] - 97] = i;
        }
    }

    for (auto i : a) {
        cout << i << ' ';
    }
    
    return 0;
}