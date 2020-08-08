#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    ll y=0, n=0, k=0, i=0, cnt=0;

    cin >> y >> k >> n;

    i = k-y;
    while((i+y) <= n)
    {
        if(i>=1)
        {
            cout << i << " ";
            cnt++;
        }
        i += k;
    }
    
    if(cnt == 0)
    {
        cout << "-1" << endl;
    }
    
    return 0;
}
