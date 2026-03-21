#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, m, x;
    int p, cnt;

    cin >> t;
    while (t--) {
        queue<pair<int, int>> q;
        vector<int> v(10);

        cin >> n >> m;

        // 큐에 인덱스 및 우선순위 값을 함께 push 한다.
        // 또한 우선순위가 같은 경우를 처리하기 위해 vector에 카운트 해준다.
        for (int i = 0; i < n; i++) {
            cin >> x;
            q.push({i + 1, x});
            v[x]++;
        }

        p = 9;
        cnt = 0;
        while (!q.empty()) {
            // 가장 높은 순위인 9부터 순회하며 처리한다.
            if (v[p] == 0) {
                p--;
            }
            else {
                // 현재 확인할 우선순위가 큐의 우선순위와 같다면 카운트한다.
                // 또한 pop 및 우선순위 카운트를 1 감소시킨다.
                // 같지 않은 경우는 front 데이터를 push 한 뒤 pop한다.
                if (q.front().second == p) {
                    cnt++;
                    if (q.front().first == m + 1) {
                        cout << cnt << '\n';
                        break;
                    }
                    q.pop();
                    v[p]--;
                }
                else {
                    q.push(q.front());
                    q.pop();
                }
            }
        }
    }

    return 0;
}