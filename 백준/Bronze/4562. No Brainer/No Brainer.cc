#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x < y)
            cout << "NO BRAINS\n";
        else
            cout << "MMM BRAINS\n";
    }

    return 0;
}