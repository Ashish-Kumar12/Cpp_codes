#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    ll n=0, i=0, j=0, spaces=0;

    cin >> n;

    // Upper part
    for(i=0, spaces=n; i<=n; i++, spaces--)
    {
        for(j=1; j<=spaces; j++)
        {
            cout << " " << " ";
        }

        cout << "0";
        for(j=1; j<=i; j++)
        {
            cout << " " << j;
        }

        for(j=i-1; j>=0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    // Lower part
    for(i=0, spaces=1; i<n; i++, spaces++)
    {
        for(j=1; j<=spaces; j++)
        {
            cout << " " << " ";
        }

        cout << "0";
        for(j=1; j<=n-i-1; j++)
        {
            cout << " " << j;
        }

        for(j=n-i-2; j>=0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}
