#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true) {
		string s;
		getline(cin, s);

		if (s == ".")
			break;

		stack<char> st;
		bool is_balanced = true;

		for (auto c : s) {
			if (c == '(' || c == '[') {
				st.push(c);
			}
			else if (c == ')') {
				if (!st.empty() && st.top() == '(') {
					st.pop();
				}
				else {
					is_balanced = false;
					break;
				}
			}
			else if (c == ']') {
				if (!st.empty() && st.top() == '[') {
					st.pop();
				}
				else {
					is_balanced = false;
					break;
				}
			}
		}

		if (is_balanced && st.empty()) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}

	return 0;
}