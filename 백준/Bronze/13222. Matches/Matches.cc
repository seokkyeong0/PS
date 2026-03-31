#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, w, h, x;
    cin >> n >> w >> h;
    
    while (n--) {
        cin >> x;
        if (x * x <= w * w + h * h) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}