#include <iostream>
#include <set>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n=0, m=0, i=0, s=0;
    set<ll> nums;
    set<ll>::iterator itr;
     
    cin >> n >> m;
    ll a[n+2]={0}, distinct[n+2]={0};

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    for(i=n; i>=1; i--)
    {
        s = nums.size();
        nums.insert(a[i]);

        if(s == nums.size())
        {
            distinct[i] = distinct[i+1];
        }
        else
        {
            distinct[i] = distinct[i+1] + 1;
        }
    }

    for(i=0; i<m; i++)
    {
        cin >> s;
        cout << distinct[s] << "\n";
    }
    
    return 0;
}
