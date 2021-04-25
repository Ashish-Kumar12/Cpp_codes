
#include <iostream>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n=0, i=0, seg=0, x=0;
	
	cin >> n;
	ll fib[n];
	
	for (i=0; i<2 && i < n; i++)
	{
		cin >> fib[i];
	}
	
	for (i=2, x=2; i<n; i++)
	{
		cin >> fib[i];
		
		if (fib[i] == (fib[i-1] + fib[i-2]))
		{
			x++;
		}
		else 
		{
			if (x > seg)
			{
				seg = x;
			}
			
			x = 2;
		}	
	}
	
	if (x > seg)
	{
		seg = x;
	}
	
	if (n == 1 || n == 2)
	{
		seg = n;
	}
	
	cout << seg << endl;
	
	return 0;
}

