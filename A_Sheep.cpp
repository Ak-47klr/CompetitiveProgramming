#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n,k;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }  
    }
    for(int i=0;i<n;i++)
    {
        k=a[i][1]/a[i][2];
        if(k>=a[i][0] && k<=a[i][1])
        {
        cout<<k-a[i][0]+1;
        }
        else 
        {
            cout<<0;
        }
        cout<<"\n";
    }
    return 0;
}
