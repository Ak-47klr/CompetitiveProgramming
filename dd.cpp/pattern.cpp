#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cout<<"enter the number of rows";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
            t=j;
        }
        for(int k=n-t;k>=1;k--)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
