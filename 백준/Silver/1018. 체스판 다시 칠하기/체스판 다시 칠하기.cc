#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<string> v;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}

	int min_1 = 1000000000;
	int min_2 = 1000000000;

	for (int a = 0; a <= n - 8; a++) {
		for (int b = 0; b <= m - 8; b++) {

			int cnt_1 = 0;
			int cnt_2 = 0;
			char c = v[a][b];

			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if ((i + 1) % 2 == 0) {
						if ((j + 1) % 2 == 0) {
							if (v[a + i][b + j] == 'B')
								cnt_1++;
							else
								cnt_2++;
						}
						else {
							if (v[a + i][b + j] == 'W')
								cnt_1++;
							else
								cnt_2++;
						}
					}
					else if ((i + 1) % 2 != 0) {
						if ((j + 1) % 2 == 0) {
							if (v[a + i][b + j] == 'W')
								cnt_1++;
							else
								cnt_2++;
						}
						else {
							if (v[a + i][b + j] == 'B')
								cnt_1++;
							else
								cnt_2++;
						}
					}
				}
			}

			if (min_1 > cnt_1) {
				min_1 = cnt_1;
			}

			if (min_2 > cnt_2) {
				min_2 = cnt_2;
			}
		}
	}

	if (min_1 < min_2) {
		cout << min_1;
	}
	else {
		cout << min_2;
	}

	return 0;
}