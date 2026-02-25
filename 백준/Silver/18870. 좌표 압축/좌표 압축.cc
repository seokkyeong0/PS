#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare_1(pair<int, int> a, pair<int, int> b);
bool compare_2(pair<int, int> a, pair<int, int> b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back({x, i});
	}

	sort(v.begin(), v.end(), compare_1);

	int cnt = 0;
	vector<pair<int, int>> t;

	for (int i = 0; i < n; i++) {
		if (i > 0 && v[i].first != v[i - 1].first) {
			t.push_back({ ++cnt, v[i].second });
		}
		else {
			t.push_back({ cnt, v[i].second });
		}
	}

	sort(t.begin(), t.end(), compare_2);

	for (int i = 0; i < n; i++) {
		cout << t[i].first << ' ';
	}

	return 0;
}

bool compare_1(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

bool compare_2(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}