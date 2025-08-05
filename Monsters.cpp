#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAX = 1000 + 5;

int n, m;
vector<string> grid;
int monsterTime[MAX][MAX];
int playerTime[MAX][MAX];
pair<int, int> parent[MAX][MAX];

int dx[] = {-1, 1, 0, 0}; 
int dy[] = {0, 0, -1, 1};
char dir_char[] = {'U', 'D', 'L', 'R'};

bool isValid(int x, int y) {
    return (x >= 0 && y >= 0 && x < n && y < m && grid[x][y] != '#');
}

bool isBoundary(int x, int y) {
    return (x == 0 || x == n - 1 || y == 0 || y == m - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    grid.resize(n);

    queue<pair<int, int>> monsterQ, playerQ;
    pair<int, int> start;

    for (int i = 0; i < n; i++) {
        cin >> grid[i]; 
        for (int j = 0; j < m; j++) {
            monsterTime[i][j] = INF;
            playerTime[i][j] = INF;

            if (grid[i][j] == 'M') {
                monsterQ.push({i, j});
                monsterTime[i][j] = 0;
            } else if (grid[i][j] == 'A') {
                start = {i, j};
            }
        }
    }

   
    while (!monsterQ.empty()) {
        int x = monsterQ.front().first;
        int y = monsterQ.front().second;
        monsterQ.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (isValid(nx, ny) && monsterTime[nx][ny] == INF) {
                monsterTime[nx][ny] = monsterTime[x][y] + 1;
                monsterQ.push({nx, ny});
            }
        }
    }

    playerQ.push(start);
    playerTime[start.first][start.second] = 0;
    parent[start.first][start.second] = {-1, -1};

    pair<int, int> escape_cell = {-1, -1};

    while (!playerQ.empty()) {
        int x = playerQ.front().first;
        int y = playerQ.front().second;
        playerQ.pop();

        if (isBoundary(x, y)) {
            escape_cell = {x, y};
            break;
        }

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (isValid(nx, ny) && playerTime[nx][ny] == INF) {
                int newTime = playerTime[x][y] + 1;
                if (newTime < monsterTime[nx][ny]) {
                    playerTime[nx][ny] = newTime;
                    parent[nx][ny] = {x, y};
                    playerQ.push({nx, ny});
                }
            }
        }
    }

    if (escape_cell.first == -1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        string path;
        pair<int, int> cur = escape_cell;

        while (parent[cur.first][cur.second].first != -1) {
            int px = parent[cur.first][cur.second].first;
            int py = parent[cur.first][cur.second].second;

            for (int d = 0; d < 4; d++) {
                if (px + dx[d] == cur.first && py + dy[d] == cur.second) {
                    path += dir_char[d];
                    break;
                }
            }

            cur = parent[cur.first][cur.second];
        }

        reverse(path.begin(), path.end());
        cout << path.size() << "\n";
        cout << path << "\n";
    }

    return 0;
}
