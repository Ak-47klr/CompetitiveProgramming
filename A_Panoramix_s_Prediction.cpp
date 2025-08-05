#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a;
    cin>>x>>y;
    for(int i=x+1;;i++)
    {
        z=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                z=1;
                break;
            }
        }
        if(z==0)
        {
            a=i;
            break;
        }
    }
    if(a==y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}