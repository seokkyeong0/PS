#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y;
	cin >> x >> y;

	for (int i = 0; i <= y - x; i++) {
		if (i % 4 == 0 && i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
			cout << "All positions change in year ";
			cout << i + x << '\n';
		}
	}

	return 0;
}