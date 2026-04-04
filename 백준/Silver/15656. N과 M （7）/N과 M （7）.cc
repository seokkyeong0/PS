#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int num[10];
int arr[10];

void solve(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		arr[k] = num[i];
		solve(k + 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}

	sort(num + 1, num + n + 1);
	solve(0);

	return 0;
}