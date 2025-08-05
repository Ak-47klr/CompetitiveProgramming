#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        // Step 1: break k into powers of 2
        priority_queue<int> pq;
        for (int i = 0; i < 32; ++i) {
            if ((k >> i) & 1) {
                pq.push(1 << i);
            }
        }

        // Step 2: expand powers until we have n elements
        while ((int)pq.size() < n) {
            int top = pq.top(); pq.pop();
            if (top == 1) break;  // can't split further
            pq.push(top / 2);
            pq.push(top / 2);
        }

        // Step 3: output result
        if ((int)pq.size() != n) {
            cout << "NO\n"; // should never happen with given constraints
        } else {
            vector<int> result;
            while (!pq.empty()) {
                result.push_back(pq.top());
                pq.pop();
            }
            for (int x : result)
                cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
