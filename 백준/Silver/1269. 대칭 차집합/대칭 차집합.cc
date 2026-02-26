#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	set<int> a;
	set<int> b;

	int cnt_a = 0, cnt_b = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.insert(x);
	}

	for (int i = 0; i < m; i++) {
		int y;
		cin >> y;
		b.insert(y);
	}

	for (auto i : a) {
		if (b.count(i))
			cnt_a++;
	}

	for (auto i : b) {
		if (a.count(i))
			cnt_b++;
	}

	cout << (n - cnt_a) + (m - cnt_b);

	return 0;
}