#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int l;
	string s;
	cin >> l >> s;

	long long m = 1234567891;
	long long r = 1;
	long long h = 0;

	for (int i = 0; i < l; i++) {
		h += ((s[i] - 96) * r) % m;
		r = (r * 31) % m;
	}

	cout << h % m;

	return 0;
}