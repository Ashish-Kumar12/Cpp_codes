#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i=0, j=0;
    char board[5][5], a, b, c, d;
    bool ans = false;

    for(i=0; i<4; i++)
    {
        cin >> board[i];
    }

    for(i=1; i<4 && !ans; i++)
    {
        for(j=1; j<4 && !ans; j++)
        {
            a = board[i][j-1];
            b = board[i][j];
            c = board[i-1][j-1];
            d = board[i-1][j];

            if(a == b && a == c && a == d)
            {
                ans = true;
            }
            else if(a == b && a == c)
            {
                ans = true;
            }
            else if(a == b && a == d)
            {
                ans = true;
            }
            else if(a == c && a == d)
            {
                ans = true;
            }
            else if(b == c && b == d)
            {
                ans = true;
            }
        }
    }

    if(ans)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    
    return 0;
}
