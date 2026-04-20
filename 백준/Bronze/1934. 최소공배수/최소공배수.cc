#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		int a, b;
		cin >> a >> b;

		int gcd = 0;
		int idx = (a < b) ? a : b;

		for (int i = 1; i <= idx; i++) {
			if ((a % i == 0) && (b % i == 0)) {
				gcd = i;
			}
		}

		cout << (a * b) / gcd << '\n';
	}

	return 0;
}