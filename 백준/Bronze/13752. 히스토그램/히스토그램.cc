#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        int h;
        cin >> h;
        while (h--) cout << '=';
        cout << '\n';
    }

    return 0;
}