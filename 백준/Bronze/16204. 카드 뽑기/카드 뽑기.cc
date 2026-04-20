#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m >> k;
    
    int o = (m < k) ? m : k;
    int x = (n - m < n - k) ? n - m : n - k;
    cout << o + x;
    
    return 0;
}