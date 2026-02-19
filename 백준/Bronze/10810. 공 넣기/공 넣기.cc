#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    int a[n] = {0};
    
    while(m--){
        int i, j, k;
        cin >> i >> j >> k;
        
        for(int x = i; x <= j; x++){
            a[x - 1] = k;
        }
    }
    
    for(auto i : a){
        cout << i << ' ';
    }
    
    return 0;
}