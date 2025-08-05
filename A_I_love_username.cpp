#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,h,l;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    h=l=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>h)
        {
            c++;
            h=arr[i];
        }
        if(arr[i]<l)
        {
            c++;
            l=arr[i];
        }
    }
    cout<<c;
    return 0;
}