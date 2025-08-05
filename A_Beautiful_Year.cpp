
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[4],n,k,r,s;
  cin>>n;
  s=n+1;
  for(;;)
  {
    k=s;
    for(int i=0;i<4;i++)
    {
    r=s%10;
    a[i]=r;
    s=s/10;
   }
   if(a[0]==a[1] || a[0]==a[2] || a[0]==a[3] || a[1]==a[2] || a[1]==a[3] || a[2]==a[3])
   {
    s=k+1;
   }
   else
   {
    cout<<k;
    break;
   }
}
return 0;
}

