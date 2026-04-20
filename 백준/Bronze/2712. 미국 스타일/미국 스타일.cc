#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long double n;
        string s;
        
        cin >> n >> s;

        cout << fixed;
        cout.precision(4);
        
        if (s == "kg") {
            cout << n * 2.2046 << " lb\n";
        }
        else if (s == "lb") {
            cout << n * 0.4536 << " kg\n";
        }
        else if (s == "l") {
            cout << n * 0.2642 << " g\n";
        }
        else  if (s == "g") {
            cout << n * 3.7854 << " l\n";
        }
    }

    return 0;
}