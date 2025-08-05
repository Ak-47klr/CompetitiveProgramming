#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s[1]=='+')
        {
            c+=1;
        }
        else
        {
            c+=-1;
        }
    }
    cout<<c;
    return 0;
}