#include <iostream>

using namespace std;

int main()
{
    long long int n, i, seconds=0;

    cin >> n;

    long long int left[n], right[n], lone=0, rone=0;

    for(i=0; i<n; i++)
    {
        cin >> left[i] >> right[i];
        if(left[i] == 1)
        {
            lone++;
        }

        if(right[i] == 1)
        {
            rone++;
        }
    }

    if(rone > n/2)
    {
        seconds += n-rone;
    }
    else
    {
        seconds += rone;
    }

    if(lone > n/2)
    {
        seconds += n-lone;
    }
    else
    {
        seconds += lone;
    }

    cout << seconds << endl;

    return 0;
}
