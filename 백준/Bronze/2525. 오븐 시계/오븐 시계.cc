#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false); 
    
    int a, b, c;
    cin >> a >> b >> c;

    if (b + c >= 60) {
        a += (b + c) / 60;
        b = (b + c) % 60;
    }
    else {
        b += c;
    }

    if (a >= 24) {
        a = a % 24;
    }

    cout << a << ' ' << b;

    return 0;
}