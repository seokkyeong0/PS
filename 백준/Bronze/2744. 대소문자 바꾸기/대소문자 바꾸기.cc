#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 97)
            a[i] += 32;
        else
            a[i] -= 32;
    }

    cout << a;
}