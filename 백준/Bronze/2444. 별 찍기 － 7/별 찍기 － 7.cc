#include <iostream>
using namespace std;

void star_7(int n);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    star_7(n);

    return 0;
}

void star_7(int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            cout << ' ';
        }
        
        for(int k = 0; k < (i + 1) * 2 - 1; k++){
            cout << '*';
        }
        
        cout << '\n';
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << ' ';
        }
        
        for(int k = 0; k < n * 2 - i * 2 - 1; k++){
            cout << '*';
        }
        
        cout << '\n';
    }
}