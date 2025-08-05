#include <bits\stdc++.h>
using namespace std;
int main()
{
    int arr[4],t;
    set <int> s1;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
        s1.insert(arr[i]);
    }
    t=s1.size();
    cout<<4-t;
    return 0;
}