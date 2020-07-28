#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n=0, m=0, i=0, j=0, diff=1000000000;

    cin >> n >> m;
    ll puzzle[m];

    for(i=0; i<m; i++)
    {
        cin >> puzzle[i];
    }

    sort(puzzle, puzzle+m);

    for(i=0, j=n-1; j<m; i++, j++)
    {
        diff = min(diff, (puzzle[j]-puzzle[i]));
    }

    cout << diff << endl;

    return 0;
}

