#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t>>s;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j+1]='B';
                s[j]='G';
                j=j+1;
            }
        }
    }
    cout<<s;
    return 0;
}
