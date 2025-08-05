#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> city(n);   
    vector<int> tower(k);  

    for (int i = 0; i < n; i++)
        cin >> city[i]; 

    for (int i = 0; i < k; i++)
        cin >> tower[i]; 

    sort(city.begin(), city.end());   
    sort(tower.begin(), tower.end()); 

    int maxrad = 0; 

    for (int i = 0; i < n; i++) {
        int c = city[i]; 
        auto it = lower_bound(tower.begin(), tower.end(), c);

        int dist = INT_MAX; 

        if (it != tower.end())
            dist = min(dist, abs(*it - c));

        if (it != tower.begin())
            dist = min(dist, abs(*prev(it) - c));

        maxrad = max(maxrad, dist); 
    }

    cout << maxrad << '\n'; 
    return 0;
}
