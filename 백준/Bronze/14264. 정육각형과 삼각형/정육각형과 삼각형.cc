#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double l;
    cin >> l;
    
    cout << fixed;
    cout.precision(15);
    cout << (l / 2.0) * ((l * sqrt(3)) / 2.0);

    return 0;
}