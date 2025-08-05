#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int count = 0;
    long long sum = 0;
    int left = 0;
    for(int right=0; right<n; ++right)
    {
        sum += a[right];
        while(sum > x && left <= right)
        {
            sum -= a[left];
            left++;
        }
        if(sum == x) count++;
    }
    cout << count << '\n';
    return 0;
}
