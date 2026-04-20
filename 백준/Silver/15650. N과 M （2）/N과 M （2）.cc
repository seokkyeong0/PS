#include <iostream>
using namespace std;

int n, m;
int arr[10];
bool is_used[10];

void solve(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (k > 0 && i <= arr[k - 1]) {
			continue;
		}

		if (!is_used[i]) {
			arr[k] = i;
			is_used[i] = 1;
			solve(k + 1);
			is_used[i] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	solve(0);

	return 0;
}