#include <iostream>
using namespace std;

char p[3073][6145];

void star_11(int n, int v, int h) {
	if (n == 3) {
		p[v][h] = '*';
		p[v + 1][h - 1] = '*';
		p[v + 1][h + 1] = '*';
		for (int i = 0; i < 5; i++) {
			p[v + 2][h - 2 + i] = '*';
		}
		return;
	}

	int d = n / 2;
	star_11(d, v, h);
	star_11(d, v + d, h - d);
	star_11(d, v + d, h + d);
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 2; j++) {
			p[i][j] = ' ';
		}
	}

	star_11(n, 0, n - 1);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 2 - 1; j++) {
			cout << p[i][j];
		}
		cout << '\n';
	}

	return 0;
}