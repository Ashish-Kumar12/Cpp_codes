#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, i, j, x, y, super=0, l, r, t, b;

    cin >> n;
    long long int points[n][2], tempX, tempY;

    for(i=0; i<n; ++i)
    {
        cin >> points[i][0] >> points[i][1];
    }

    for(i=0; i<n; ++i)
    {
        x=points[i][0], y=points[i][1], l=0, r=0, t=0, b=0;

        for(j=0; j<n; ++j)
        {
            tempX = points[j][0], tempY = points[j][1];

            if(tempX == x)
            {
                if(tempY < y)
                {
                    b = 1;
                    continue;
                }

                if(tempY > y)
                {
                    t = 1;
                    continue;
                }
            }

            if(tempY == y)
            {
                if(tempX > x)
                {
                    r = 1;
                    continue;
                }

                if(tempX < x)
                {
                    l = 1;
                    continue;
                }
            }
        }

        if(l && r && t && b)
        {
            super++;
        }
    }

    cout << super << endl;

    return 0;
}
