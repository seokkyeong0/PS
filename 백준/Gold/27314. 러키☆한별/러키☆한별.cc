#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;
vector<string> maze;
pair<int, int> hanbyeol;
vector<pair<int, int>> people;
vector<pair<int, int>> exits;

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

// BFS를 통해 특정 시작점들로부터 모든 칸까지의 거리를 계산
vector<vector<int>> bfs(pair<int, int> start) {
    vector<vector<int>> dist(N, vector<int>(M, -1));
    queue<pair<int, int>> q;

    dist[start.first][start.second] = 0;
    q.push(start);

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M && maze[nx][ny] != 'X') {
                if (dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({ nx, ny });
                }
            }
        }
    }
    return dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    maze.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> maze[i];
        for (int j = 0; j < M; j++) {
            if (maze[i][j] == 'H') hanbyeol = { i, j };
            else if (maze[i][j] == 'P') people.push_back({ i, j });
            else if (maze[i][j] == '#') exits.push_back({ i, j });
        }
    }

    int max_gifts = 0;

    // 각 출구별로 한별이가 해당 출구를 선택했을 때 받을 수 있는 선물의 수를 계산
    for (auto exit_pos : exits) {
        // 출구로부터 역으로 BFS를 수행하여 모든 칸까지의 최단 거리 계산
        vector<vector<int>> dist_from_exit = bfs(exit_pos);

        int h_dist = dist_from_exit[hanbyeol.first][hanbyeol.second];

        // 한별이가 이 출구에 도달할 수 없는 경우는 스킵
        if (h_dist == -1) continue;

        int current_gifts = 0;
        for (auto p_pos : people) {
            int p_dist = dist_from_exit[p_pos.first][p_pos.second];
            // 사람이 출구에 도달 가능하고, 그 거리가 한별이의 거리보다 작거나 같으면 만날 수 있음
            if (p_dist != -1 && p_dist <= h_dist) {
                current_gifts++;
            }
        }
        max_gifts = max(max_gifts, current_gifts);
    }

    cout << max_gifts << endl;

    return 0;
}