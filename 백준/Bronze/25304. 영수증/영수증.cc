#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int p, t;
    cin >> p >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;
        p -= (a * b);
    }
    
    if (p == 0)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}