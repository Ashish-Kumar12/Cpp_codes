#include <iostream>

#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n=0, m=0, i=0;

    cin >> n >> m;
    ll sum[n]={0};

    for (i=1; i<=n; i++)
    {
        sum[i-1] = (i*(i+1))/2;
    }

    m = m%sum[n-1];

    for (i=n-2; i>=0; i--)
    {
        if (sum[i] <= m)
        {
            m -= sum[i];
            break;
        }
    }

    cout << m << "\n";
    
    return 0;
}
