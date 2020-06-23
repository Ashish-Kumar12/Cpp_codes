#include <iostream>

using namespace std;

int main()
{
    long long int n, k, l, c, d, p, nl, np, w, x, y, z, minNum;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    w = k*l;
    x = w/nl;
    y = c*d;
    z = p/np;

    if(x <= y && x <= z)
    {
        minNum = x;
    }
    else if(y <= x && y <=z)
    {
        minNum = y;
    }
    else
    {
        minNum = z;
    }

    cout << minNum/n << endl;

    return 0;
}
