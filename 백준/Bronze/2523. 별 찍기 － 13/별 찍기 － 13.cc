#include <iostream>
using namespace std;

void star_13(int n);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    star_13(n);

    return 0;
}

void star_13(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}