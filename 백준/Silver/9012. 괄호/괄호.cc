#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;

	while (k--) {
		string s;
		cin >> s;

		stack<char> st;
		for (auto c : s) {
			if (c == '(') {
				st.push(c);
			}
			else if (c == ')') {
				if (!st.empty()) {
					if (st.top() == '(') {
						st.pop();
					}
					else {
						st.push(c);
					}
				}
				else {
					st.push(c);
				}
			}
		}

		if (st.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}