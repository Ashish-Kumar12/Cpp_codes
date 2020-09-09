#include <iostream>

#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n=0, k=0, i=0, t=0;
    cin >> n >> k;

    for (i=1, t=n; i<=n && i<=k; i++)
    {
        cout << t-- << " ";
    }

    for (t=1; i<=n; i++)
    {
        cout << t++ << " ";
    }

    cout << "\n";
    
    return 0;
}
