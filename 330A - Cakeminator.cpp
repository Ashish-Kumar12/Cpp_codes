#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int r=0, c=0, i=0, j=0, cnt=0;

    cin >> r >> c;
    char cake[r+2][c+2];
    bool row[r+1], col[c+1];

    memset(row, false, r*(sizeof(bool)));
    memset(col, false, c*(sizeof(bool)));

    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            cin >> cake[i][j];

            if (cake[i][j] == 'S')
            {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (i=0; i<r; i++)
    {
        if (row[i] == false)
        {
            for (j=0; j<c; j++)
            {
                if (cake[i][j] == '.')
                {
                    cnt++;
                    cake[i][j] = '-';
                }
            }
        }
    }

    for (j=0; j<c; j++)
    {
        if (col[j] == false)
        {
            for (i=0; i<r; i++)
            {
                if (cake[i][j] == '.')
                {
                    cnt++;
                    cake[i][j] = '-';
                }
            }
        }
    }

    cout << cnt << "\n";
    
    return 0;
}
