#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, m, M, T, R;
	cin >> N >> m >> M >> T >> R;

	int total = 0;
	int goal = 0;
	int bp = m;

	if (bp + T > M) {
		cout << -1;
		return 0;
	}

	while (goal < N) {
		total++;
		if (bp + T <= M) {
			bp += T;
			goal++;
		}
		else {
			bp -= R;
			if (bp < m) {
				bp = m;
			}
		}
	}

	cout << total;

	return 0;
}