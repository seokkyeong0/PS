#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n;

	set<string, greater<string>> s;

	while (n--) {
		string a, b;
		cin >> a >> b;
		if (b == "enter") {
			s.insert(a);
		}
		else if (b == "leave") {
			s.erase(a);
		}
	}

	for (auto o : s) {
		cout << o << '\n';
	}

	return 0;
}