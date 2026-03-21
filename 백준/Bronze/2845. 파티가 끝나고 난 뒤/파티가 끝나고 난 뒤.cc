#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, p;
    int num[5] = { 0 };

    cin >> l >> p;
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }
    
    for (int i = 0; i < 5; i++) {
        cout << num[i] - l * p << ' ';
    }

    return 0;
}