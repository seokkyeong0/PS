#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare_rev(int a, int b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	vector<int> v;
	for (auto c : s) {
		v.push_back(c - 48);
	}

	sort(v.begin(), v.end(), compare_rev);

	for (auto i : v) {
		cout << i;
	}

	return 0;
}

bool compare_rev(int a, int b) {
	return (a > b);
}