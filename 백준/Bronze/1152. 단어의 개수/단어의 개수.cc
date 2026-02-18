#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    int cnt = 1;

    for (auto c : s) {
        if (c == ' ')
            cnt++;
    }

    if (s[0] == ' ')
        cnt--;

    if (s[s.size() - 1] == ' ')
        cnt--;

    cout << cnt;

    return 0;
}