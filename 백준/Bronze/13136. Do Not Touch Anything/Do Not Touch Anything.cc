#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double r, c, n;
    cin >> r >> c >> n;
    cout << (long long)(ceil(r / n) * ceil(c / n));
    
    return 0;
}