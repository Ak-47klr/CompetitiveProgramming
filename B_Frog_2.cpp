#include <bits/stdc++.h>
using namespace std;

int f(int arr[],int n,int k,vector<int> &dp)
{
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];

     int minCost = INT_MAX;

     for(int j=1;j<=k;j++)
     {
        if(n-j>=0){
            int cost=f(arr,n-j,k,dp)+abs(arr[n]-arr[n-j]);
            minCost=min(minCost,cost);
        }
     }
     return dp[n]=minCost;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<int> dp(n,-1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<f(arr,n-1,k,dp)<<'\n';
    return 0;
}