#include <iostream>
using namespace std;

int arr[10001] = { 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--) {
		int x;
		cin >> x;
		arr[x]++;
	}

	for (int i = 1; i <= 10000; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				cout << i << '\n';
			}
		}
	}

	return 0;
}