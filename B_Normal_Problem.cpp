#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='p')
            {
                s[i]='q';
            }
            else if(s[i]=='q')
            {
                s[i]='p';
            }
        }
         reverse(s.begin(),s.end());
         cout<<s<<"\n";
         s.clear();
    }
   
    return 0;
}