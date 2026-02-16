#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false); 
    
    int n;
    cin >> n;

    int result = 1;
    for (int i = 2; i < n + 1; i++) {
        result *= i;
    }

    cout << result;

    return 0;
}