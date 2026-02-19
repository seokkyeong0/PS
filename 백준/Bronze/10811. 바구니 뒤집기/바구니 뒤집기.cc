#include <iostream>
using namespace std;

int celi(int a);
void swap(int *a, int *b);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
    }
    
    while(m--){
        int i, j;
        cin >> i >> j;
        
        int idx_f = i - 1;
        int idx_l = j - 1;
        int swap_cnt = celi(j - i);
        
        for(int x = 0; x < swap_cnt; x++){
            swap(a[idx_f++], a[idx_l--]);
        }
    }
    
    for(auto i : a){
        cout << i << ' ';
    }
    
    return 0;
}

int celi(int a){
    if (a % 2 > 0)
        return a / 2 + 1;
    else
        return a / 2;
}

void swap(int *a, int *b){
    int *t;
    t = a;
    a = b;
    b = t;
}