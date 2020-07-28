#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    ll n=0, k=0, i=0, op=0;

    cin >> n >> k;
    ll seq[n];

    for(i=0; i<n; i++)
    {
        cin >> seq[i];
    }

    for(i=n-1; i>=0; i--)
    {
        if(seq[i] != seq[n-1])
        {
            break;
        }
    }

    if((i+1) >= k)
    {
        op = -1;
    }
    else
    {
        op = i+1;
    }

    cout << op << endl;
    
    return 0;
}
