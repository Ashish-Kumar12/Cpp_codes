#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    
    ll n=0, i=0, sum=0, t=0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> t;
        sum += t;
    }

    if(sum%n == 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << n-1 << endl;
    }
    
    return 0;
}
