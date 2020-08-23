#include <iostream>
#include <map>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n=0, i=0, h=0, m=0, cashes=0;
    map<pair<ll, ll>, ll> visitors;
    map<pair<ll, ll>, ll>::iterator itr;
    pair<ll, ll> t;

    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> h >> m;
        t.first = h, t.second = m;

        visitors.insert({t, 0});
        visitors[t]++;
    }

    for(itr=visitors.begin(); itr!=visitors.end(); itr++)
    {
        if (itr->second > cashes)
        {
            cashes = itr->second;
        }
    }

    cout << cashes << "\n";
    
    return 0;
}
