#include <iostream>
using namespace std;

int OoO(int a, int b) {
    return (a + b) * (a - b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << OoO(a, b);

    return 0;
}