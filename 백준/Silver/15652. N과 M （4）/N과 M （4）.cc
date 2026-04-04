#include <iostream>
using namespace std;

int n, m;
int arr[10];

void solve(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (k > 0 && arr[k - 1] > i)
			continue;
		arr[k] = i;
		solve(k + 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	solve(0);

	return 0;
}