#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int n, m, x;

set<vector<int>> s;
vector<int> v;
vector<int> arr(10);
vector<int> is_used(10);

void solve(int k) {
	if (k == m) {
		if (!s.count(arr)) {
			s.insert(arr);
			for (int i = 0; i < m; i++)
				cout << arr[i] << ' ';
			cout << '\n';
		}
		return;
	}

	for (int i = 0; i < n; i++) {
		if (!is_used[i]) {
			arr[k] = v[i];
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
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());
	solve(0);

	return 0;
}