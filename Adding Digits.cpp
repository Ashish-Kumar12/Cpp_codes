#include <iostream>

#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a=0, b=0, n=0, i=0;
    bool ans = false;

    cin >> a >> b >> n;

    for (i=0; i<=9; i++)
    {
        if ((a*10 + i)%b == 0)
        {
            ans = true;
            break;
        }
    }

    if (ans)
    {
        cout << a*10+i;
        for (i=1; i<=n-1; i++)
        {
            cout << "0";
        }
        cout << "\n";
    }
    else
    {
        cout << "-1\n";
    }
    
    return 0;
}
