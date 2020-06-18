#include <iostream>

using namespace std;

int main()
{
    int mat[5][5], i, j, moves=0, x, y;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j])
            {
                x = i, y = j;
            }
        }
    }

    moves = abs(x-2) + abs(y-2);

    cout << moves;

    return 0;
}
