#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    int b;

    cin >> n >> b;

    int result = 0;
    int w = 1;

    for (int i = n.size() - 1; i >= 0; i--) {
        if (n[i] >= 65) {
            result += (n[i] - 55) * w;
            w *= b;
        }
        else {
            result += (n[i] - 48) * w;
            w *= b;
        }
    }

    cout << result;

    return 0;
}