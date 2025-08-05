#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[20],n,r,c=0,k=0;
    cin>>n;
    for(int i=0;;i++)
    {
        if(n<1)
        {
            break;
        }
        r=n%10;
        n=n/10;
        a[i]=r;
        c=c+1;
        if(a[i]==4 || a[i]==7)
        {
            k=k+1;
        }

    }
    if(k==c)
    {
        if(k==4 || k==7)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }
    return 0;  
}