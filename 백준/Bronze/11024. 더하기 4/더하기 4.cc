#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string n;
        int sum = 0;
        getline(cin, n);

        string tmp = "";

        for (int i = 0; i < n.size(); i++) {
            tmp += n[i];
            if (n[i] == ' ' || i == n.size() - 1) {
                sum += stoi(tmp);
                tmp = "";
            }
        }

        cout << sum << '\n';
    }

    return 0;
}