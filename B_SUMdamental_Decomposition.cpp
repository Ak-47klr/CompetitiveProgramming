#include <bits/stdc++.h>
string reverseWords(string s) {
    string rev;
    int i,j;
    j=s.size()-1;
    i=j-1;
    while(j!=-1)
    {
        if(s[i]!=' '||i!=0)
        {
            i--;
        }
        else
        {
            k=i+1;
            while(k<j)
            {
                rev+=s[k];
                k++;
            }
            rev+=s[k];
            rev[k+1]=' ';
            j=i-1;
            i--;
        }
    }
    rev[s.size()]='\0';
    return rev;
}
    int main()
    {

    }