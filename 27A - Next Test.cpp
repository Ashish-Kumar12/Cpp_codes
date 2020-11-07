#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int n=0, t=0, i=0, j=0, next=1;
	
	cin >> n;
	int test[3001] = {0};
	
	for (i=0; i<n; i++)
	{
		cin >> t;
		test[t-1] = 1;
		
		if (next == t)
		{
			for (j=next-1; j<3001; j++)
			{
				if (test[j] == 0)
				{
					next = j+1;
					break;
				}
			}
		}
	}
	
	cout << next << endl;
	
	return 0;
}
