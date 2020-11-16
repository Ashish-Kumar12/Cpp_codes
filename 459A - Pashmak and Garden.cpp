#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int x1, x2, x3, x4, y1, y2, y3, y4, d=0;
	bool ans = false;
	
	cin >> x1 >> y1 >> x2 >> y2;
	
	if (!(x1 != x2 && y1 != y2))
	{
		if (x1 == x2)
		{
			d = abs(y1-y2);
			
			if ((x1+d) <= 1000)
			{
				x3 = x1+d;
				y3 = y1;
				x4 = x2+d;
				y4 = y2;
			}
			else 
			{
				x3 = x1-d;
				y3 = y1;
				x4 = x2-d;
				y4 = y2;				
			}
		}
		else 
		{
			d = abs(x1-x2);
			
			if ((y1+d) <= 1000)
			{
				x3 = x1;
				y3 = y1+d;
				x4 = x2;
				y4 = y2+d;
			}
			else
			{
				x3 = x1;
				y3 = y1-d;
				x4 = x2;
				y4 = y2-d;
			}
		}
		
		ans = true;
	}
	else if (abs(x1-x2) == abs(y1-y2))
	{
		d = abs(x1-x2);
		
		if (x1 < x2 && y1 < y2)
		{
			x3 = x1;
			y3 = y1+d;
			x4 = x2;
			y4 = y2-d;
		}
		else if (x1 < x2 && y1 > y2)
		{
			x3 = x1;
			y3 = y1-d;
			x4 = x2;
			y4 = y2+d;
		}
		else if (x1 > x2 && y1 > y2)
		{
			x3 = x1-d;
			y3 = y1;
			x4 = x2+d;
			y4 = y2;
		}
		else if (x1 > x2 && y1 < y2)
		{
			x3 = x1-d;
			y3 = y1;
			x4 = x2+d;
			y4 = y2;
		}
		
		ans = true;
	}
	
	if (ans)
	{
		cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl; 
	}
	else
	{
		cout << "-1" << endl;
	}
	
	return 0;
}
