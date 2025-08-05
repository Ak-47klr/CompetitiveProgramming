#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,r1,r2,c,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s>>r1>>r2>>c;
        if(r1>s)
        {
            r1=s;
        }
        if(r2>s)
        {
            r2=s;
        }
        x=(2*s)-(r1+r2);
        if(c>x)
        {
            c=x;
        }
       
        cout<<r1+r2+c<<"\n";
    }
    return 0;
}