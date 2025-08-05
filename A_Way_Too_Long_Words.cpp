#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        l=s.length();
        if(l>10)
        {
            k=l-2;
            cout<<s[0]<<k<<s[l-1]<<"\n";
        }  
        else
        {
            cout<<s<<"\n";
        }
    }
    return 0;
}
  