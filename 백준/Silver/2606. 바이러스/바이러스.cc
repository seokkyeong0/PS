#include <iostream>
#include <queue>
using namespace std;

int n, m, cnt;
queue<int> q;
int arr[101][101];
bool visited[101];

void Infection(int s) {
    q.push(s);
    visited[s] = true;
    while (!q.empty()) {
        int c = q.front(); 
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (arr[c][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
                cnt++;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    while (m--) {
        int u, v;
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }

    Infection(1);
    cout << cnt;

    return 0;
}