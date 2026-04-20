#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;

	stack<int> s;

	int sum = 0;
	while (k--) {
		int n;
		cin >> n;
		if (n == 0) {
			sum -= s.top();
			s.pop();
		}
		else {
			sum += n;
			s.push(n);
		}
	}

	cout << sum;

	return 0;
}