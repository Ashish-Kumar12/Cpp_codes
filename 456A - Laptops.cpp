#include <iostream>
#include <map>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    map<ll, ll> lap;
    map<ll, ll>::iterator i, k;

	ll n=0, j=0, a=0, b=0;
	bool ans = false;
	
	cin >> n;
	for (j=1; j<=n; j++)
	{
		cin >> a >> b;
		
		i = lap.find(a);
		if (i == lap.end())
		{
			lap.insert({a, b});
		}
		else
		{
			if (i->second < b)
			{
				i->second = b;
			}
		}
	}
	
	for (j=0, i=lap.begin(); j<lap.size()-1; j++)
	{
		k = i++;
		if (k->second > i->second)
		{
			ans = true;
			break;
		}
	}
    
    if (ans)
    {
    	cout << "Happy Alex" << endl;
    }
    else 
    {
    	cout << "Poor Alex" << endl;
    }
	
	return 0;
}
