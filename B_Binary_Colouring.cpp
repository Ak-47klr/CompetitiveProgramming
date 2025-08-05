#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> res;

        while (x) {
            if (x % 2 == 0) {
                res.push_back(0);
                x /= 2;
            } else {
                // Choose between +1 or -1
                if ((x & 3) == 1) {
                    res.push_back(1);
                    x -= 1;
                } else {
                    res.push_back(-1);
                    x += 1;
                }
                x /= 2;
            }
        }

        cout << res.size() << "\n";
        for (int val : res) cout << val << " ";
        cout << "\n";
    }

    return 0;
}
