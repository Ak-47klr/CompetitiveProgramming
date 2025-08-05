/******************************************
* Author  : Ashar_H
* Created : 2025-07-05 00:35
******************************************/

#include <bits/stdc++.h>
using namespace std;

// ----------------- Typedefs -----------------
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

// ----------------- Macros -----------------
#define fastIO() ios::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define RFOR(i, a, b) for (int i = a; i >= b; --i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define in(v) for (auto &x : v) cin >> x
#define out(v) for (auto &x : v) cout << x << ' '; cout << '\n'
#define nl '\n'
#define rsort(v) sort(rall(v))

// ----------------- Constants -----------------
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// ----------------- Solve Function -----------------
void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    vi arr(n);
    in(arr);
    int l=0;
    ll cursum=0,maxsum=INT_MIN;
    FOR(r,0,n)
    {
        cursum+=arr[r];
        while(r-l+1>b)
        {
            cursum-=arr[l++];
        }
        if(r-l+1>=a)
        {
            maxsum=max(cursum,maxsum);
        }
    }
    cout<<maxsum;
}

// ----------------- Main Function -----------------
int main() {
    fastIO();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}