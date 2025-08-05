#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int height = 0;
        int i = 1;
        int curr = 1; 

        while (i < n) {
            int next = 0; 
            while (curr > 0 && i < n) {
                next++; i++;
                while (i < n && a[i-1] < a[i]) {
                    next++; i++;
                }
                curr--;
            }
            height++;
            curr = next;
        }

        cout << height << '\n';
    }
    return 0;
}
