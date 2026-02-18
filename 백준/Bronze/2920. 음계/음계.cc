#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;

    for (int i = 0; i < 8; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    bool a = false;
    bool d = false;
    bool m = false;

    for (int i = 0; i < 8; i++) {
        if (v[0] == 1) {
            a = true;
            if (v[i] != i + 1) {
                a = false;
                m = true;
                break;
            }
        }
        else if (v[0] == 8) {
            d = true;
            if (v[i] != 8 - i) {
                d = false;
                m = true;
                break;
            }
        }
        else {
            m = true;
            break;
        }
    }

    if (a)
        cout << "ascending";
    else if (d)
        cout << "descending";
    else if (m)
        cout << "mixed";

    return 0;
}