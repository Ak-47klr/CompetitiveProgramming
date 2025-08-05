#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> cards(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> cards[i];
            freq[cards[i]]++;
        }

        int total = 0;
        for (auto& [val, count] : freq) {
            int groups = count / k;
            int leftover = count % k;
            total += groups * (k - 1) + leftover;
        }

        results.push_back(total);
    }

    for (int i = 0; i < results.size(); ++i) {
        cout << results[i];
        if (i < results.size() - 1)
            cout << "\n";
    }

    return 0;
}
