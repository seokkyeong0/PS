#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, string>> v;

	for (int i = 0; i < n; i++) {
		int a;
		string s;
		cin >> a >> s;
		v.push_back({a, s});
	}
	
	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}