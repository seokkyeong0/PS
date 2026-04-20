#include <iostream>
using namespace std;

long long int gcd (long long int a, long long int b);

int main() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);

    long long int a, b;
    cin >> a >> b;
    
    cout << (a * b) / gcd(a, b);
		
    return 0;
}

long long int gcd (long long int a, long long int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}