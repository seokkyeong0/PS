#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n;
    while(n--) {
        cin >> x;
        cout << x << ' ' << x << '\n';
    }
        
    return 0;
}