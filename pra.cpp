#include <bits\stdc++.h>
using namespace std;
int main()
{
    int c2=0;
for(int i=3;i<=9;i++)
    {
        int c1=0;
        for(int j=i;j<=10;j++)
        {
            if(j%i==0)
            {
                c1++;
            }
        }
        if(c1>=2)
        {
            c2++;
        }
    }
    cout<<c2;
    return 0;
}