#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string a;
        cin >> a;
        cout << a[0] << a[a.size() - 1] << '\n';
    }

    return 0;
}