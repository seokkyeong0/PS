#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int k, n;
        cin >> k >> n;
        
        int floor[15][15] = {0};
        for (int i = 0; i <= 14; i++) {
            floor[0][i] = i;
        }
        
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                for (int k = 1; k <= j; k++) {
                    floor[i][j] += floor[i - 1][k];
                }
            }
        }
        
        cout << floor[k][n] << '\n';
    }

    return 0;
}