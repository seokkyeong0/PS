#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int s[6] = { 0 };
	for (int i = 0; i < 6; i++) {
		int m;
		cin >> m;
		s[i] = m;
	}

	int t, p;
	cin >> t >> p;

	int sum = 0;
	for (auto i : s) {
		if (i % t == 0) {
			sum += i / t;
		}
		else {
			sum += i / t + 1;
		}
	}

	cout << sum << '\n';
	cout << n / p << ' ' << n % p;

	return 0;
}