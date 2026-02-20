#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[9][9];
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int n;
            cin >> n;
            a[i][j] = n;
        }
    }
    
    int max = a[0][0];
    int idx_c = 1;
    int idx_r = 1;
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
                idx_c = i + 1;
                idx_r = j + 1;
            }
        }
    }
    
    cout << max << '\n';
    cout << idx_c << ' ' << idx_r;
    
    return 0;
}