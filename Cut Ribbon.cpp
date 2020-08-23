#include <iostream>
#include <algorithm>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n=0, a[3] = {0}, x=0, y=0, z=0, i=0, j=0, k=0, cnt=0, t=0;

    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    x = n / a[0];
    y = n / a[1];
    z = n / a[2];

    for(k=0; k<=z; k++)
    {
        for(j=0; j<=y; j++)
        {
            i = (n - j*a[1] - k*a[2])/a[0];
            t = i+j+k;

            if(t > cnt && ((i*a[0] + j*a[1] + k*a[2]) == n))
            {
                cnt = t;
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}
