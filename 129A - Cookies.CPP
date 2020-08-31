#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=0, ways=0, sum=0, i=0;

    cin >> n;
    int bags[n];

    for (i=0; i<n; i++)
    {
        cin >> bags[i];
        sum += bags[i];
    }

    for (i=0; i<n; i++)
    {
        sum -= bags[i];
    
        if (sum%2 == 0)
        {
            ways++;
        }

        sum += bags[i];
    }

    cout << ways << "\n";
    
    return 0;
}
