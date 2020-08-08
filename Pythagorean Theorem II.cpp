#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    ll a=0, b=0, c=0, n=0, cnt=0;
    
    cin >> n;

    for(a=1; a<=n; a++)
    {
        b=a+1;
        c=b+1;
        while(c<=n)
        {
            while((c*c) < (a*a + b*b))
            {
                c++;
            }

            if(((c*c) == (a*a + b*b)) && c<=n)
            {
                cnt++;    
            }
            b++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}
