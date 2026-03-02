#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	stack<int> s;

	while (n--) {
		int a, b, r;
		cin >> a;

		if (a == 1) {
			cin >> b;
			s.push(b);
		}
		else if (a == 2) {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (a == 3) {
			cout << s.size() << '\n';
		}
		else if (a == 4) {
			if (s.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (a == 5) {
			if (!s.empty()) {
				cout << s.top() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}