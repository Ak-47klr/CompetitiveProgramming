#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        int r, c;
        cin >> r >> c;

        char nums[5][5];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> nums[i][j];
            }
        }

        int distanceI = r, distanceJ = c;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (nums[i][j] == 'R')
                {
                    if (i + j < distanceI + distanceJ)
                    {
                        distanceI = i;
                        distanceJ = j;
                    }
                }
            }
        }

        bool ok = true;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (nums[i][j] == 'R')
                {
                    if (i < distanceI || j < distanceJ)
                    {
                        ok = false;
                    }
                }
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
