#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	set<string> s;

	while (n--) {
		string a;
		cin >> a;
		s.insert(a);
	}

	int cnt = 0;
	while (m--) {
		string b;
		cin >> b;
		if (s.count(b)) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}