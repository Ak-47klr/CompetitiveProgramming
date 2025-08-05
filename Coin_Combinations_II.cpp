#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];

    vector<int> dp(x + 1);
    dp[0] = 1;

    for (int sum = 1; sum <= x; sum++) {
        for (int i = 0; i < n; i++) {
            if (sum - coins[i] >= 0) {
                dp[sum] = (dp[sum] + dp[sum - coins[i]]) % MOD;
            }
        }
    }

    cout << dp[x] << endl;
    return 0;
}
