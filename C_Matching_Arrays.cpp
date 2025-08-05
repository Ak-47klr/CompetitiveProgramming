#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        // Pair each element of a with its original index
        vector<pair<int, int>> a_sorted(n);
        for (int i = 0; i < n; ++i)
            a_sorted[i] = {a[i], i};
        sort(a_sorted.begin(), a_sorted.end());
        sort(b.begin(), b.end());

        // Step 1: Count how many a[i] > b[i] we can get (beauty)
        int j = 0, beauty = 0;
        for (int i = 0; i < n; ++i) {
            if (a_sorted[i].first > b[j]) {
                ++beauty;
                ++j;
            }
        }

        if (beauty < x) {
            cout << "NO\n";
            continue;
        }

        // Step 2: Construct rearranged b with exactly x beauty
        vector<int> result(n, 0);
        vector<bool> used(n, false);
        int b_ptr = 0;
        int needed = x;

        // Assign b[j] to a[i] to get beauty in x positions
        for (int i = n - 1; i >= 0 && needed > 0; --i) {
            int a_val = a_sorted[i].first;
            int idx = a_sorted[i].second;

            if (a_val > b[b_ptr]) {
                result[idx] = b[b_ptr];
                used[b_ptr] = true;
                ++b_ptr;
                --needed;
            }
        }

        // Fill remaining positions in result with unused b elements
        b_ptr = 0;
        for (int i = 0; i < n; ++i) {
            if (result[i] == 0) {
                while (used[b_ptr]) ++b_ptr;
                result[i] = b[b_ptr];
                used[b_ptr] = true;
            }
        }

        cout << "YES\n";
        for (int i = 0; i < n; ++i)
            cout << result[i] << " ";
        cout << "\n";
    }

    return 0;
}
