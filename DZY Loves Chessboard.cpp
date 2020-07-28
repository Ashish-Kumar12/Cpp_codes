#include <iostream>
#define li long int

using namespace std;

int main()
{
    li n=0, m=0, i=0, j=0;

    cin >> n >> m;
    char b[n+10][m+10];

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> b[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(b[i][j] == '.')
            {
                if((i + j) % 2 == 0)
                {
                    b[i][j] = 'B';
                }
                else
                {
                    b[i][j] = 'W';
                }
            }
            cout << b[i][j];
        }
        cout << endl;
    }

    return 0;
}
