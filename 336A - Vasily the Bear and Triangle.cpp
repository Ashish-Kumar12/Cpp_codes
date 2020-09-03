#include <iostream>

#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll x=0, y=0, x1=0, y1=0, x2=0, y2=0;

    cin >> x >> y;

    if (x > 0 && y > 0)
    {
        x1 = 0;
        y1 = x+y;
        x2 = x+y;
        y2 = 0;
    }
    else if (x < 0 && y > 0)
    {
        x1 = x-y;
        y1 = 0;
        x2 = 0;
        y2 = y-x;
    }
    else if (x < 0 && y < 0)
    {
        x1 = x+y;
        y1 = 0;
        x2 = 0;
        y2 = x+y;
    }
    else 
    {
        x1 = 0;
        y1 = y-x;
        x2 = x-y;
        y2 = 0;
    }

    cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
    
    return 0;
}
