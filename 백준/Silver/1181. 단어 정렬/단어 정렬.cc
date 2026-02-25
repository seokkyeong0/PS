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
		v.push_back(s);
	}
	
	sort(v.begin(), v.end(), compare);
	v.erase(unique(v.begin(), v.end()), v.end());

	for (auto s : v) {
		cout << s << '\n';
	}

	return 0;
}

bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size();
}