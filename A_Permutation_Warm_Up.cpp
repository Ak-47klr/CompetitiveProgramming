#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    int k=pow(n,2)/4;
    cout<<k+1<<"\n";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        fun(arr[i]);
    }
}