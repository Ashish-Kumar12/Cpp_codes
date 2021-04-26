#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n=0, m=0, i=0, j=0, cnt=0, x=0;
	
	cin >> n >> m;
	char mat[n+10][m+10];
	int wolf[n+10][m+10] = {0};
	
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=m; j++)
		{
			cin >> mat[i][j];
			
			if (mat[i][j] == 'W')
			{
				wolf[i][j] = 0;
			}
			else 
			{
				wolf[i][j] = -1;
			}
		}
	}
	
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=m; j++)
		{
			if (mat[i][j] == 'P')
			{
				for (x=-1; x<=1; x += 2)
				{
					if (mat[i+x][j] == 'W')
					{
						wolf[i+x][j]++;
					}
					
					if (mat[i][j+x] == 'W')
					{
						wolf[i][j+x]++;
					}
				}
			}
		}
	}
	
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=m; j++)
		{
			if (mat[i][j] == 'P')
			{
				for (x=1; x<=4; x++)
				{
					if (mat[i-1][j] == 'W' && wolf[i-1][j] == x)
					{
						cnt++;
						wolf[i-1][j] = -1;
						
						wolf[i+1][j]--;
						wolf[i][j-1]--;
						wolf[i][j+1]--;
						break;
					}
					
					if (mat[i][j-1] == 'W' && wolf[i][j-1] == x)
					{
						cnt++;
						wolf[i][j-1] = -1;
						
						wolf[i-1][j]--;
						wolf[i+1][j]--;
						wolf[i][j+1]--;
						break;
					}
					
					if (mat[i][j+1] == 'W' && wolf[i][j+1] == x)
					{
						cnt++;
						wolf[i][j+1] = -1;
						
						wolf[i-1][j]--;
						wolf[i+1][j]--;
						wolf[i][j-1]--;
						break;
					}

					if (mat[i+1][j] == 'W' && wolf[i+1][j] == x)
					{
						cnt++;
						wolf[i+1][j] = -1;
						
						wolf[i-1][j]--;
						wolf[i][j-1]--;
						wolf[i][j+1]--;
						break;
					}
				}
			}
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}
