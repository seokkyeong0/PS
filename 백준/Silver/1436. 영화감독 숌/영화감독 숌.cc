#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int idx = 0;
	int i = 666;

	while (true) {
		string s = to_string(i);

		int streak = 0;
		for (auto c : s) {
			if (c - 48 == 6)
				streak++;
			else
				streak = 0;

			if (streak == 3) {
				idx++;
				break;
			}
		}

		if (n == idx)
			break;
		else
			i += 1;
	}

	cout << i;

	return 0;
}