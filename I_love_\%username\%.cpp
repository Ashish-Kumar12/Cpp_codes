#include <iostream>

#define ll long long int

using namespace std;

int main()
{
    ll n=0, i=0, minPerformance=100000, maxPerformance=-1, amazing=-2;

    cin >> n;
    ll performances[n];

    for(i=0; i<n; i++)
    {
        cin >> performances[i];

        if(performances[i] < minPerformance)
        {
            minPerformance = performances[i];
            amazing++;
        }

        if(performances[i] > maxPerformance)
        {
            maxPerformance = performances[i];
            amazing++;
        }
    }

    cout << amazing << endl;

    return 0;
}
