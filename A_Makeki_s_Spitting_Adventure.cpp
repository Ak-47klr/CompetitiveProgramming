#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> people(n);  
    unordered_map<int, int> position;

    for (int i = 0; i < n; i++) {
        int x, d;
        cin >> x >> d;
        people[i] = {x, d};
        position[x] = i;
    }

    for (int i = 0; i < n; i++) {
        int pos = people[i].first;
        int dis = people[i].second;
        int target = pos + dis;

        if (position.count(target)) {
            int j = position[target];
            int d2 = people[j].second;

            if (target + d2 == pos) {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
