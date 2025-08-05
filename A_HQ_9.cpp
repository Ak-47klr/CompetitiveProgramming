#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    for(char c:s)
    {
        if( c=='H'||c=='Q'|c=='9')
        {
            s1="YES";
            break;
        }
        else
        {
            s1="NO";
        }
    }
    cout<<s1;
    return 0;
}