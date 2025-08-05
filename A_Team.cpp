#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1,a2,a3,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a1>>a2>>a3;
        if((a1+a2+a3)>=2)
        {
            s++;
        }
    }
    cout<<s;
    return 0;
}