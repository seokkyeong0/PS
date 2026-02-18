#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false); 
    
    int a, b, c;
    cin >> a >> b >> c;

    bool x = (a == b) ? true : false;
    bool y = (b == c) ? true : false;
    bool z = (a == c) ? true : false;

    if (x && y && z)
        cout << 10000 + (a * 1000);
    else if (x || z)
        cout << 1000 + (a * 100);
    else if (y)
        cout << 1000 + (b * 100);
    else {
        if (a > b && a > c)
            cout << a * 100;
        else if (b > a && b > c)
            cout << b * 100;
        else
            cout << c * 100;
    }

    return 0;
}