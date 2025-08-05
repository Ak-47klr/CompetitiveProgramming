#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    string s;
    set <int> ascii;
    for(int i=0;i<n;i++)
    {
        cin>>c>>s;
        for(char c1:s)
        {
            ascii.insert(static_cast <int>(c1));
        }
        cout<<ascii.size()+c<<"\n";
        ascii.clear();
    }
    return 0;

}