#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> army(n), arrows(n);
    for (int i = 0; i < n; i++) {
        cin >> army[i];
    }

    arrows[0] = army[0];
    for (int i = 1; i < n; i++) {
        arrows[i] = arrows[i - 1] + army[i];
    }

    long long carried = 0;

    while (q--) {
        long long k;
        cin >> k;
        carried += k;

        int low = 0, high = n - 1, fallen = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arrows[mid] <= carried) {
                low = mid + 1;
            } else {
                fallen = mid;
                high = mid - 1;
            }
        }

        if (fallen == n) {
            cout << n << '\n';
            carried = 0;
        } else {
            cout << n - fallen << '\n';
        }
    }

    return 0;
}
