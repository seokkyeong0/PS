#include <iostream>
using namespace std;

long long OoO(long long a, long long b) {
    return (a + b) * (a - b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;
    cout << OoO(a, b);

    return 0;
}