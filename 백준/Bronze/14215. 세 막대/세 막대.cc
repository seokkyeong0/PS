#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    
    if (max({ a, b, c }) >= a + b + c - max({ a, b, c }))
        cout << (a + b + c - max({ a, b, c })) * 2 - 1;
    else
        cout << a + b + c;

    return 0;
}