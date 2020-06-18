#include <iostream>

using namespace std;

int main()
{
    int i, j, grid[3][3];
    int ans[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin >> grid[i][j];
            ans[i][j] = grid[i][j];
        }
    }

    ans[0][0] += grid[0][1] + grid[1][0];
    ans[0][1] += grid[0][0] + grid[1][1] + grid[0][2];
    ans[0][2] += grid[0][1] + grid[1][2];
    ans[1][0] += grid[0][0] + grid[1][1] + grid[2][0];
    ans[1][1] += grid[1][0] + grid[0][1] + grid[1][2] + grid[2][1];
    ans[1][2] += grid[1][1] + grid[0][2] + grid[2][2];
    ans[2][0] += grid[1][0] + grid[2][1];
    ans[2][1] += grid[2][0] + grid[1][1] + grid[2][2];
    ans[2][2] += grid[2][1] + grid[1][2];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(ans[i][j] % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}
