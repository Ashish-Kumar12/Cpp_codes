#include <iostream>

using namespace std;

int main()
{
    long int n, a, b, c, cnt=0, solve=0;

    cin >> n;

    while(n--)
    {
        cin >> a >> b >> c;
        cnt = 0;
        if(a == 1)
        {
            cnt++;
        }
        if(b == 1)
        {
            cnt++;
        }
        if(c == 1)
        {
            cnt++;
        }

        if(cnt >= 2)
        {
            solve++;
        }
    }

    cout << solve << endl;

    return 0;
}
