#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[100][100] = {0};
    
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                a[i][j] = 1;
            }
        }
    }
    
    int result = 0;
    
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            result += a[i][j];
        }
    }
    
    cout << result;
    
    return 0;
}