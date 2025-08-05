#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int nums1, nums2;
    int count = 0;
    cin >> n >> nums1 >> nums2;

    for (int i = 0; i < n; i++)
    {
        int r1 = nums1 % 10;
        int r2 = nums2 % 10;

        int direct = abs(r1 - r2);
        int rotate = 10 - direct;

        count += min(direct, rotate);

        nums1 /= 10;
        nums2 /= 10;
    }

    cout << count << endl;
    return 0;
}
