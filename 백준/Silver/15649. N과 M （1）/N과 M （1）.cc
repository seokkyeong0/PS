#include <iostream>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void nm_1(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = 1;
			nm_1(k + 1);
			isused[i] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	nm_1(0);

	return 0;
}