#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=0,k=0,s,j,t,p,z;
    cin>>n;;
    z=n-1;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    l=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]==l){
          continue;
        }
        if(a[i]>l)
        {
            l=a[i];
            k=i;
        }
    }
    s=a[0];
    for(int i=0;i<n;i++)
    {
        
        if(a[i]<=s)
        {
            s=a[i];
            p=i-1;
            j=n-1-i;
        }
    }
    if(k>p)
    {
        t=j+k-1;
    }
    else
    {
        t=j+k;
    }
    //cout<<k<<"\n"<<j<<"\n";
    cout<<t;
    return 0;
}