#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<string> v;

	while (n--) {
		string s;
		cin >> s;

		bool is_dup = false;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == s)
				is_dup = true;
				
		}

		if (!is_dup)
			v.push_back(s);
	}
	
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j];
		}
		cout << '\n';
	}

	return 0;
}

bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size();
}