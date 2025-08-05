#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s1;
    int arr[1000],l,i=0;
    cin>>s1;
    l=s1.length();
    for(int j=0;j<l;j++)
    {
        if(s1[j]>=49 && s1[j]<=51)
        {
            if(s1[j]==49)
            {
                arr[i]=1;
            }
            else if(s1[j]==50)
            {
                arr[i]=2;
            }
            else
            {
                arr[i]=3;
            }
            i++;
        }
    }
    for(int j=0;j<i-1;j++)
    {
        for(int k=0;k<i-j-1;k++)
        {
            if(arr[k]<arr[k+1])
            {
                swap(arr[k],arr[k+1]);
            }
        }
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
        if(j==0)
        {
            break;
        }
        cout<<"+";
    }
    return 0;
}