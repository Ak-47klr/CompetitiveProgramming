#include <bits/stdc++.h>
using namespace std;


#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);


inline bool isValid(const vector<int>& arr, int k, long long maxSum) {
    int parts = 1;
    long long sum = 0;

    for (int x : arr) {
        if (sum + x <= maxSum) {
            sum += x;
        } else {
            ++parts;
            sum = x;
        }
    }

    return parts <= k;
}

int main() {
    fast_io;  
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    long long low = 0, high = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        high += arr[i];
        low = max<long long>(low, arr[i]); 
    }

    long long answer = high;

    while (low <= high) {
        long long mid = (low + high) / 2;

        if (isValid(arr, k, mid)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << answer << '\n';
    return 0;
}
