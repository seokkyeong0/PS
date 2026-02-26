#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	map<string, int> m;
	map<int, string> k;

	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		m.insert({ s, i + 1 });
		k.insert({ i + 1, s });
	}

	for (int i = 0; i < b; i++) {
		string t;
		cin >> t;
		
		if (m.count(t)) {
			cout << m[t] << '\n';
		} 
		else if (k.count(stoi(t))) {
			cout << k[stoi(t)] << '\n';
		}
	}

	return 0;
}