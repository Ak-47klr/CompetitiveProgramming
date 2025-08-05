#include <iostream>
#include <vector>
using namespace std;

const int MAX = 200005;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> diff(MAX, 0);

    // Step 1: Mark ranges using difference array
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        diff[l] += 1;
        if (r + 1 < MAX)
            diff[r + 1] -= 1;
    }

    // Step 2: Build frequency count using prefix sum
    vector<int> freq(MAX, 0);
    freq[0] = diff[0];
    for (int i = 1; i < MAX; ++i) {
        freq[i] = freq[i - 1] + diff[i];
    }

    // Step 3: Mark admissible temperatures
    vector<int> is_admissible(MAX, 0);
    for (int i = 0; i < MAX; ++i) {
        if (freq[i] >= k)
            is_admissible[i] = 1;
    }

    // Step 4: Build prefix sum for admissible temperatures
    vector<int> prefix_sum(MAX, 0);
    prefix_sum[0] = is_admissible[0];
    for (int i = 1; i < MAX; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + is_admissible[i];
    }

    // Step 5: Answer the queries in O(1) each
    while (q--) {
        int a, b;
        cin >> a >> b;
        int ans = prefix_sum[b] - (a > 0 ? prefix_sum[a - 1] : 0);
        cout << ans << "\n";
    }

    return 0;
}
