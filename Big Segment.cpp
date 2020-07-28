#include <iostream>

using namespace std;

int main()
{
    long long int i=0, n=0, x=0, y=0, a=0, b=0, index=0;
    bool ans=true;

    cin >> n;

    cin >> a >> b;
    index = 1;
    for(i = 2; i <= n; i++)
    {
        cin >> x >> y;

        if(a<=x && y<=b && ans)
        {
            ans = true;
        }
        else if(x<=a && b<=y)
        {
            ans = true;
            index = i;
            a = x, b = y;
        }
        else
        {
            ans = false;
            a = (a<=x) ? a : x;
            b = (b>=y) ? b : y;
        }
    }

    if(ans)
    {
        cout << index << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
