#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R' && s[i+1]=='R')
        {
            c++;
            
        }
        else if(s[i]=='G' && s[i+1]=='G')
        {
            c++;
            
        }
        else if(s[i]=='B' && s[i+1]=='B')
        {
           c++;
           
        }
    }
    cout<<c;
    return 0;
    
}