#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

   
    vector<pair<long long, int>> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            long long sum = arr[i].first + arr[left].first + arr[right].first;

            if (sum == x) {
                vector<int> newarr(3);
                newarr[0]=arr[i].second;
                newarr[1]= arr[left].second;
                newarr[2]=arr[right].second;
                sort(newarr.begin(),newarr.end());
                for(int i=0;i<3;i++)
                {
                    cout<<newarr[i]<<' ';
                }
                return 0;
            }
            else if (sum < x) {
                ++left;
            } else {
                --right;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
