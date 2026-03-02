#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	stack<int> st;

	int order = 1;
	while (n--) {
		int s;
		cin >> s;

		while (!st.empty()) {
			if (st.top() == order) {
				st.pop();
				order++;
			}
			else {
				break;
			}
		}

		if (s != order) {
			st.push(s);
		}
		else {
			order++;
		}
	}

	bool is_possible = true;
	while (!st.empty()) {
		if (st.top() == order) {
			st.pop();
			order++;
		}
		else {
			is_possible = false;
			break;
		}
	}

	if (is_possible)
		cout << "Nice";
	else
		cout << "Sad";

	return 0;
}