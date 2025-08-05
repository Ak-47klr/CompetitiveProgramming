#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c01=0,c02=0,c11=0,c12=0,k1,k2;
    cin>>n;
    int mat[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mat[i][0]==0)
        {
            c01++;
        }
        else
        {
            c11++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mat[i][1]==0)
        {
            c02++;
        }
        else
        {
            c12++;
        }
    }
    if(c01>c11)
    {
        k1=c11;
    }
    else
    {
        k1=c01;
    }
    if(c02>c12)
    {
        k2=c12;
    }
    else
    {
        k2=c02;
    }
    cout<<k1+k2;
    return 0;
}
    