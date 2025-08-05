#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,c=0,k=0;
    string s;
    cin>>s;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            c=c+1;
        }
        else
        {
            k=k+1;
        }
    }
    if(c==k)
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=tolower(s[i]);
            }
        }
    }
    else if(c<k)
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=toupper(s[i]);
            }
        }
    }
    else if(c>k)
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=tolower(s[i]);
            }
        }
    }
    cout<<s;
    return 0;

}