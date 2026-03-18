#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, o, cnt = 0;
        int farm[51][51] = { 0 };
        bool vis[51][51] = { 0 };

        cin >> n >> m >> o;
        while (o--) {
            int x, y;
            cin >> x >> y;
            farm[x][y] = 1;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                queue<pair<int, int>> q;

                if (farm[i][j] && !vis[i][j]) {
                    vis[i][j] = true;
                    q.push({ i, j });
                    cnt++;
                }
                
                while (!q.empty()) {
                    pair<int, int> cur = q.front(); q.pop();
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if (vis[nx][ny] || !farm[nx][ny]) continue;
                        vis[nx][ny] = true;
                        q.push({ nx,ny });
                    }
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}