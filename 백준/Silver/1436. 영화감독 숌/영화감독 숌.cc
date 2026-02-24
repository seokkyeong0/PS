#include <iostream>
using namespace std;

bool star_wars(int n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int num = 666;
	int cnt = 0;

	while (true) {
		if (star_wars(num)) {
			cnt += 1;
		}

		if (cnt == n) {
			cout << num;
			break;
		}

		num++;
	}

	return 0;
}

bool star_wars(int n) {
	while (n >= 666) {
		if (n % 1000 == 666) {
			return true;
		}
		n /= 10;
	}
	return false;
}