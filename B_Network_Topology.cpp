#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
vector<vector<int>> adj;
bool visited[MAX];
int nodes, edges;

int dfs_count(int node) {
    visited[node] = true;
    int cnt = 1;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            cnt += dfs_count(neighbor);
        }
    }
    return cnt;
}

bool dfs_cycle(int node, int parent) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (dfs_cycle(neighbor, node))
                return true;
        } else if (neighbor != parent) {
            return true; 
        }
    }
    return false;
}

int main() {
    cin >> nodes >> edges;
    adj.resize(nodes + 1);

    for (int i = 0; i < edges; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }


    int center = 0, leaves = 0;

for (int i = 1; i <= nodes; i++) {
    int deg = adj[i].size();
    if (deg == nodes - 1) center++;
    else if (deg == 1) leaves++;
}

if (center == 1 && leaves == nodes - 1) {
    cout << "star topology\n";
    return 0;
}


    bool allTwo = true;
    if (edges == nodes) {
        for (int i = 1; i <= nodes; i++) {
            if (adj[i].size() != 2) {
                allTwo = false;
                break;
            }
        }

        if (allTwo) {
            memset(visited, false, sizeof(visited));
            if (dfs_cycle(1, -1)) {
                cout << "ring topology\n";
                return 0;
            }
        }
    }

    
    int countDeg1 = 0, countDeg2 = 0;
    if (edges == nodes - 1) {
        for (int i = 1; i <= nodes; i++) {
            if (adj[i].size() == 1)
                countDeg1++;
            else if (adj[i].size() == 2)
                countDeg2++;
        }

        if (countDeg1 == 2 && countDeg1 + countDeg2 == nodes) {
            memset(visited, false, sizeof(visited));

            int start = -1;
            for (int i = 1; i <= nodes; i++) {
                if (adj[i].size() == 1) {
                    start = i;
                    break;
                }
            }

            int total = dfs_count(start);
            if (total == nodes) {
                cout << "bus topology\n";
                return 0;
            }
        }
    }


    cout << "unknown topology\n";
    return 0;
}
