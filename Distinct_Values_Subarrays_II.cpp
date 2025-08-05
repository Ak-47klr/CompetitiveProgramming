#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    int left = 0;
    long long result = 0;

    for (int right = 0; right < n; ++right) {
        freq[arr[right]]++;

        while ((int)freq.size() > k) {
            freq[arr[left]]--;
            if (freq[arr[left]] == 0) {
                freq.erase(arr[left]);
            }
            left++;
        }

        result += right - left + 1;
    }

    cout << result << "\n";
    return 0;
}
