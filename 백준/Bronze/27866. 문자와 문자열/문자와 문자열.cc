#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    int i;

    cin >> a >> i;
    cout << a[i-1];
    
    return 0;
}