#include <bits/stdc++.h>
using namespace std;

const int MXN = 100'010;
bool vis[MXN];
int V, p, q, c, mxCost, mxNode;
vector<pair<int, int>> adj[MXN];
void dfs(int cur, int cost) {
  if (mxCost < cost) {
    mxNode = cur;
    mxCost = cost;
  }
  for (auto [nxtCost, nxt] : adj[cur]) {
    if (vis[nxt]) continue;
    vis[nxt] = true;
    dfs(nxt, cost + nxtCost);
  }
}
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> V;
  for (int i = 0; i < V; i++) {
    cin >> p;
    while (1) {
      cin >> q;
      if (q == -1) break;
      cin >> c;
      adj[p].push_back({c, q});
    }
  }
  vis[1] = true;
  dfs(1, 0);
  fill(vis, vis + MXN, false);
  vis[mxNode] = true;
  dfs(mxNode, 0);
  cout << mxCost;
}