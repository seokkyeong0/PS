#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int n = 0, i = 1;
    bool rev = false;
    
    while (x > n + i) {
        n += i++;
        rev ^= true;
    }

    if (rev)
        cout << x - n << '/' << i + 1 - (x - n);
    else
        cout << i + 1 - (x - n) << '/' << x - n;

    return 0;
}