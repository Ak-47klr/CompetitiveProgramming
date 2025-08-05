#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,c1=0,c2=0,c;
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>a2[i];
    }
    for(int i=0;i<n2;i++)
    {
        c=0;
        for(int j=0;j<n1;j++)
        {
            c1++;
            c++;
            if(a2[i]==a1[j])
            {
                break;
            }
        }
        c2=c2+(n1-c)+1;
    }
    cout<<c1<<" "<<c2;
    return 0;
}