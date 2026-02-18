#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false); 
    
    int a, b;
    cin >> a >> b;

    cout << a * (b % 10) << '\n';
    cout << a * ((b / 10) % 10) << '\n';
    cout << a * (b / 100) << '\n';
    cout << a * b;

    return 0;
}