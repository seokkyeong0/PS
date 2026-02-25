#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	int sum = 0;
	for (auto i : v) {
		sum += i;
	}

	cout << sum / 5 << '\n';
	cout << v[2];

	return 0;
}