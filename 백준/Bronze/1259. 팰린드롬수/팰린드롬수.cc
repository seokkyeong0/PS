#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true) {
		string s;
		cin >> s;

		if (s == "0")
			break;

		bool is_palindrome = true;

		for (int i = 0; i < s.size() / 2; i++) {
			if (s[i] != s[s.size() - 1 - i]) {
				is_palindrome = false;
			}
		}

		if (is_palindrome)
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}