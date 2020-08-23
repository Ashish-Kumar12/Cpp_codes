#include <iostream>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
    const ll maxn=100010;
    ll n=0, m=0, i=0, t=0, opt=0, l=0, r=0, v[maxn]={0}, u[maxn]={0};

	cin >> n;

	for (i=1; i<=n; i++)
	{
        cin >> t;
		u[i] = t;
        v[i] = t;
	}
	sort(u+1, u+n+1);

	for (i=1; i<=n; i++)
    {
        u[i] += u[i-1];
        v[i] += v[i-1];
    }
		
	cin >> m;
	for (i=1; i<=m; i++)
	{
		cin >> opt >> l >> r;

        if(opt == 1)
        {
            cout << v[r] - v[l-1];
        }
        else
        {
            cout << u[r] - u[l-1];
        }
        cout << "\n";
	}

	return 0;
}

