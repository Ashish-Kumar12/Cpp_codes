#include <bits/stdc++.h>
#define ll long long int 

using namespace std;

int main()
{
    ll s=0, n=0, i=0, a=0, b=0;
    bool win = true;
    multimap<ll, ll> dragon;
    multimap<ll, ll>::iterator itr;

    cin >> s >> n;

    for(i=0; i<n; i++)
    {
        cin >> a >> b;
        dragon.insert({a, b});
    }

    for(itr = dragon.begin(); itr != dragon.end(); itr++)
    {
        if(s > itr->first)
        {
            s += itr->second;
        }
        else
        {
            win = false;
            break;
        }
    }

    if(win)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}

