#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;
vector <int> adj[505];
int dist[505];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  while(m--){
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int ans = 0;
  queue<int> q;
  q.push(1);
  dist[1] = 1;
  while(!q.empty()){
    int cur = q.front();
    q.pop();
    if(dist[cur] > 2) // 친구의 친구는 거기서 bfs를 더 하지 않고 stop
      continue;
    for(auto nxt : adj[cur]){
      if(dist[nxt] > 0)
        continue;
      dist[nxt] = dist[cur] + 1;
      q.push(nxt);
      ans++;
    }
  }
  cout << ans << '\n';
}