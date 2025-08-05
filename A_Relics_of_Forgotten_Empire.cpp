#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int curr_sum = 0;
    int i = 1;
    int count = 0;

    while (curr_sum < n) {
        int coin = min(i, n - curr_sum);
        curr_sum += coin;
        i = curr_sum + 1;
        count++;
    }

    cout << count << '\n';
    return 0;
}
