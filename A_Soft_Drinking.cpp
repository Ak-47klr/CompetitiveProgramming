#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,s;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int arr[3];
    arr[0]=(k*l)/(nl*n);
    arr[1]=(c*d)/n;
    arr[2]=p/(np*n);
    s=arr[0];
    for(int i=0;i<3;i++)
    {
        if(arr[i]<s)
        {
            s=arr[i];
        }
    }
    cout<<s;
    return 0;

}