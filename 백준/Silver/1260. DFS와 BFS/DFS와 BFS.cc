#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

vector<int> adj[1001];
bool visited[1001];

void DFS(int cur) {
    visited[cur] = true;
    cout << cur << " ";
    for (int next : adj[cur]) {
        if (!visited[next]) DFS(next);
    }
}

void BFS(int s) {
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        visited[s] = true;
        cout << cur << ' ';
        for (auto i : adj[cur]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, v, x, y;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    DFS(v); cout << '\n';
    for (int i = 1; i <= n; i++) visited[i] = false;
    BFS(v); cout << '\n';
    
    return 0;
}