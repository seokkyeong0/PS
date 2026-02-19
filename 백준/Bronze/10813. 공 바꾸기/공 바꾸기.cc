#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int *t;
    t = a;
    a = b;
    b = t;
}

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
        swap(a[i - 1], a[j - 1]);
    }
    
    for(auto i : a){
        cout << i << ' ';
    }
    
    return 0;
}