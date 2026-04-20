#include <iostream>
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

	set<string> t;

	while (m--) {
		string b;
		cin >> b;

		if (s.count(b)) {
			t.insert(b);
		}
	}

	cout << t.size() << '\n';
	for (auto x : t) {
		cout << x << '\n';
	}

	return 0;
}