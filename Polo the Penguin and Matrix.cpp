#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    long long int n=0, m=0, d=0, i=0, s=0, mid=0, mov=0;
    bool ans=true;

    cin >> n >> m >> d;

    s = n*m;
    long long int matrix[s] = {0};

    for(i=0; i<s; i++)
    {
        cin >> matrix[i];
    }
    sort(matrix, matrix+s);

    mid = matrix[s/2];

    for(i=0; i<s; i++)
    {
        if (abs(matrix[i]-mid)%d != 0)
        {
            ans = false;
            break;
        }
        else
        {
            mov += (abs(matrix[i]-mid)/d);
        }
    }

    if(ans)
    {
        cout << mov << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
