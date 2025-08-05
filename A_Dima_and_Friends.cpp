#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    for(int i=1;i<=5;i++)
    {
        if((s+i)%(n+1)==1)
        {
            c++;
        }
    }
    cout<<5-c;
    return 0;
}