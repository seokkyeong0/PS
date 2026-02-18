#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    string a;
    cin >> a;

    int s = 0;
    for (auto c : a) {
        s += (int)c - 48;
    }

    cout << s;

    return 0;
}