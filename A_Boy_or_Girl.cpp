#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l;
    set <char> q;
    cin>>s;
    for(char c: s)
    {
        q.insert(c);
    }
    l=q.size();
    if(l%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}