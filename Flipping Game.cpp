#include <iostream>

using namespace std;

int main()
{
    int n=0, i=0, j=0, k=0, ones=0, gain=0;

    cin >> n;
    int a[n+2] = {0};

    for(i=1; i<=n; i++)
        cin >> a[i];

    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
            gain = 0;
            for(k=1; k<=n; k++)
            {
                if(i <= k && k <= j)
                {
                    gain += (1 - a[k]);
                }
                else
                {
                    gain += a[k];
                }
            }

            if(gain > ones)
                ones = gain;
        }
    }

    cout << ones << "\n";

    return 0;
}
