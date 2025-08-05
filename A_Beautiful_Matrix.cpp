#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],r,c,s1,s2,s3;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                r=i;
                c=j;
            }
        }
    }
    s1=2-r;
    s2=2-c;
    s3=abs(s1)+abs(s2);
    cout<<s3;
    return 0;
}