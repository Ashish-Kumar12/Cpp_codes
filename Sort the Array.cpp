#include <iostream>
#include <algorithm>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n=0, i=0, l=0, r=0, seg=0;

    cin >> n;
    ll a[n] = {0}, s[n] = {0};

    for (i=0; i<n; i++)
    {
        cin >> a[i];
        s[i] = a[i];
    }
    sort(s, s+n);

    for (i=0; i<n-1 && seg < 3;)
    {
        if (a[i] == s[i])
        {
            i++;
        }
        else
        {
            l = i;
            r = i;
            while (a[i] > a[i+1] && i < n-1)
            {
                i++;
                r++;
            }
            
            sort(a+l, a+r+1);
            seg++;
        }
    }

    if (seg <= 1)
    {
        cout << "yes\n";
        cout << l+1 << " " << r+1 << "\n";
    }
    else
    {
        cout << "no\n";
    }

    return 0;
}

