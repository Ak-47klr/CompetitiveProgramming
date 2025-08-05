#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll compute_cost(const vector<int>& window) {
    int n = window.size();
    int median = window[n / 2];
    ll total_cost = 0;
    for (int i = 0; i < n; ++i) {
        total_cost += abs((ll)window[i] - median);  // cast to ll for safety
    }
    return total_cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Initial window
    vector<int> window(arr.begin(), arr.begin() + k);
    sort(window.begin(), window.end());
    cout << compute_cost(window) << " ";

    for (int i = k; i < n; ++i) {
        // Remove element that just moved out of the window
        auto it = lower_bound(window.begin(), window.end(), arr[i - k]);
        window.erase(it);

        // Insert new element in sorted position
        window.insert(lower_bound(window.begin(), window.end(), arr[i]), arr[i]);

        // Print cost for current window
        cout << compute_cost(window) << " ";
    }

    cout << "\n";
    return 0;
}
