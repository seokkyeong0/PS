#include <iostream>
using namespace std;

int arr[20000001] = { 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--) {
		int x;
		cin >> x;
		arr[x + 10000000]++;
	}

	int m;
	cin >> m;

	while (m--) {
		int y;
		cin >> y;
		cout << arr[y + 10000000] << ' ';
	}

	return 0;
}