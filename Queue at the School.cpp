#include <iostream>

using namespace std;

int main()
{
    int n, t, i, j;

    cin >> n >> t;

    char p[n];
    cin >> p;

    for(i=0; i<t; i++)
    {
        for(j=0; j<n; j++)
        {
            if(p[j] == 'B' && p[j+1] == 'G')
            {
               p[j] = 'G', p[j+1] = 'B', j++;
            }
        }
    }

    cout << p;

    return 0;
}
