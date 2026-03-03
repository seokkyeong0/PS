#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	deque<int> dq;

	while (t--) {
		int n, x;
		cin >> n;

		if (n == 1) {
			cin >> x;
			dq.push_front(x);
		}
		else if (n == 2) {
			cin >> x;
			dq.push_back(x);
		}
		else if (n == 3) {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (n == 4) {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (n == 5) {
			cout << dq.size() << '\n';
		}
		else if (n == 6) {
			if (dq.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (n == 7) {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.front() << '\n';
			}
		}
		else if (n == 8) {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
			}
		}
	}

	return 0;
}