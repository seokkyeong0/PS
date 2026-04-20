#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<int> s;

	while (n--) {
		int c;
		cin >> c;
		s.insert(c);
	}

	int m;
	cin >> m;

	while (m--) {
		int a;
		cin >> a;
		cout << s.count(a) << ' ';
	}

	return 0;
}