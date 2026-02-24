#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int min = 123456789;

	for (int i = 0; i <= n / 3; i++) {
		for (int j = 0; j <= n / 5; j++) {
			if (n == i * 3 + j * 5) {
				if (min > i + j) {
					min = i + j;
				}
			}
		}
	}

	if (min != 123456789)
		cout << min;
	else
		cout << -1;

	return 0;
}