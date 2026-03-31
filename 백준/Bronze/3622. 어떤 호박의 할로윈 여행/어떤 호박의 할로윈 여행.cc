#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, a, B, b, P;
    cin >> A >> a >> B >> b >> P;

    if (A + B <= P) {
        cout << "Yes";
    }
    else {
        if (A < B && b >= A && B <= P) cout << "Yes";
        else if (A > B && a >= B && A <= P) cout << "Yes";
        else cout << "No";
    }

    return 0;
}