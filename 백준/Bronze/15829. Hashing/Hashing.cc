#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	unsigned long long h = 0;
	for (int i = 0; i < n; i++) {
		h += (s[i] - 96) * pow(31, i);
	}

	cout << h % 1234567891;

	return 0;
}