#include <iostream>
using namespace std;

long long my_factorial(int n);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << my_factorial(n);

    return 0;
}

long long my_factorial(int n) {
    if (n == 0) return 1;
    else return n * my_factorial(n - 1);
}