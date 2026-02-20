#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int i = 1;

    while (true) {
        int l, p, v;
        cin >> l >> p >> v;

        if (l == 0 && p == 0 && v == 0)
            break;

        int result = 0;

        while (true) {
            if (v - p > 0) {
                result += l;
                v -= p;
            }
            else {
                if (v > l) {
                    result += l;
                    break;
                }
                else {
                    result += v;
                    break;
                }
            }
        }

        cout << "Case " << i++ << ": " << result << '\n';
    }

    return 0;
}