#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    int n[5],x;
    set <int> num;
    for(int i=0;i<5;i++)
    {
        cin>>n[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=1;j<=n[4];j++)
        {
            if(j%n[i]==0)
            {
                num.insert(j);
            }
        }
    }
    x=num.size();
    cout<<x;
    return 0;

}