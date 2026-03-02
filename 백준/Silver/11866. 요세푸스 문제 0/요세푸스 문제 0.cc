#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	
	vector<int> v;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (q.size() != 0) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		v.push_back(q.front());
		q.pop();
	}

	cout << '<';
	for (int i = 0; i < v.size(); i++) {
		if (i == v.size() - 1)
			cout << v[i] << '>';
		else
			cout << v[i] << ", ";
	}

	return 0;
}