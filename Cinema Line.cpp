#include <iostream>

#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n=0, t=0, n25=0, n50=0, n100=0, i=0;
    bool ans=true;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> t;

        if(t == 25)
        {
            n25++;
        }
        else if(t == 50)
        {
            n50++;
            n25--;
        }
        else // if(t == 100)
        {
            if(n50 > 0)
            {
                n50--;
                n25--;
            }
            else
            {
                n25 -= 3;
            }
        }

        if(n25 < 0 || n50 < 0 || n100 < 0)
        {
            ans = false;
            break;
        }
    }

    if(ans)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
