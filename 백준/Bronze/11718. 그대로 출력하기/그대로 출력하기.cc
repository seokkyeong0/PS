#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        string a;
        getline(cin, a);

        if (cin.eof())
            break;
        else
            cout << a << '\n';
    }

    return 0;
}