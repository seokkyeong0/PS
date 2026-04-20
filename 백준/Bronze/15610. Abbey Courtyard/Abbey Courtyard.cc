#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double a;
    long double m = 4.0;

    cin >> a;

    cout << fixed;
    cout.precision(8);
    cout << sqrt(a) * m;

    return 0;
}