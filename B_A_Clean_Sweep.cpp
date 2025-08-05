#include <bits/stdc++.h>
using namespace std;

string result(vector<int>& a) {
    sort(a.begin(), a.end(), greater<int>()); 
    long long alice = 0, bob = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) { 
            if (a[i] % 2 == 0) alice += a[i];
        } else { 
            if (a[i] % 2 == 1) bob += a[i];
        }
    }

    if (alice > bob) return "Alice";
    else if (bob > alice) return "Bob";
    else return "Tie";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << result(a) << '\n';
    }

    return 0;
}
