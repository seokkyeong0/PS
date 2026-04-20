#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << '\n';
	cout << (a * b) / gcd(a, b);

	return 0;
}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}