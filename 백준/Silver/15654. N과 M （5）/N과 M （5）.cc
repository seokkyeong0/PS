#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int num[10];
int arr[10];
int is_used[10];

void solve(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!is_used[i]) {
			arr[k] = num[i];
			is_used[i] = true;
			solve(k + 1);
			is_used[i] = false;
		}
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