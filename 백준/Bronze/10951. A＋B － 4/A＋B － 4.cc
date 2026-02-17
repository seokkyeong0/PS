#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int a, b;
        cin >> a >> b;

        if (cin.eof()) 
            break;
        else
            cout << a + b << '\n';
    }

    return 0;
}