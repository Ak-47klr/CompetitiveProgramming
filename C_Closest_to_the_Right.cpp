#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr,int target)
{
    int start=0,end=arr.size()-1;
    int index=end+1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>=target)
        {
            index=min(index,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return index+1;
}


int main()
{
    int n1,n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
        cout<<search(arr1,arr2[i])<<'\n';
    }
    return 0;
}