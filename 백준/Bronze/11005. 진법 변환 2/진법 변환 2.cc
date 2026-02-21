#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, r;
    cin >> n >> b;

    vector<char> v;

    while (n > 0) {
        r = ((n % b) >= 10) ? (n % b) + 55 : (n % b) + 48;
        v.push_back(char(r));
        n /= b;
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i];
    }

    return 0;
}