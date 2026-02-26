#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	set<string> s;

	string m;
	cin >> m;

	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m.size(); j++) {
			s.insert(m.substr(i, j));
		}
	}

	cout << s.size();

	return 0;
}