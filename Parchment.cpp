#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,range,k;
    cin>>n>>range;
    int largest=0,smallest=range;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        largest=max(largest,arr[i]);
        smallest=min(smallest,arr[i]);
    }
    cin>>k;
    vector<int> maxPower(k);
    int diff=largest-smallest;
    for(int i=0;i<k;i++)
    {
        cin>>maxPower[i];
        cout<<diff/maxPower[i]<<'\n';
    }
   
  return 0;

}
