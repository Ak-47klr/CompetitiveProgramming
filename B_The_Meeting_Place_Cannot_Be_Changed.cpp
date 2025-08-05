#include <bits/stdc++.h>
using namespace std;

bool can_meet(const vector<int>& x, const vector<int>& v, double t) {
    double left = -1e18, right = 1e18;
    
    for (int i = 0; i < x.size(); ++i) {
        double cur_left = x[i] - v[i] * t;
        double cur_right = x[i] + v[i] * t;
        
        left = max(left, cur_left);     
        right = min(right, cur_right);  
    }

    return left <= right; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> x(n), v(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i];
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    double lo = 0, hi = 1e9;
    for (int i = 0; i < 100; ++i) {  
        double mid = (lo + hi) / 2.0;
        if (can_meet(x, v, mid))
            hi = mid;
        else
            lo = mid;
    }

    cout << fixed << setprecision(12) << hi << '\n';
    return 0;
}
