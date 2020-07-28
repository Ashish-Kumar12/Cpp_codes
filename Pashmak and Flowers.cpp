#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n=0, i=0, diff=0, first=1, last=1, temp=0;

    cin >> n;
    ll flowers[n];

    for(i=0; i<n; i++)
    {
        cin >> flowers[i];
    }
    sort(flowers, flowers+n);

    diff = flowers[n-1] - flowers[0];

    if(flowers[0] != flowers[n-1])
    {
        i=1;
        while(flowers[i-1] == flowers[i] && i < n)
        {
            first++;
            i++;
        }

        i=n-1;
        while(flowers[i-1] == flowers[i] && i > 0)
        {
            last++;
            i--;
        }

        cout << diff << " " << first*last << endl;
    }
    else
    {
        temp = (n*(n-1))/2;

        cout << diff << " " << temp << endl;
    }
    
    return 0;
}
