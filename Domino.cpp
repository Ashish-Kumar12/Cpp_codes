#include <iostream>

using namespace std;

int main ()
{
    int n=0, l=0, r=0, x=0, y=0;
    bool s = false;

    cin >> n;
    
    for (; cin >> x >> y;)
    {
        if (n == 1 and x % 2 + y % 2 == 1)
        {
            cout << -1;
            return 0;
        }
        if (y % 2 + x % 2 == 1)
            s = true;
        l += x;
        r += y;
    }

    if (l % 2 == 0 and r % 2 == 0) cout << 0 << endl;
    else if (l % 2 == 1 and r % 2 == 1 and s) cout << 1 << endl;
    else cout << -1 << endl;
    
    return 0;
}
