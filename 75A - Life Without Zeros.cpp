#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

ll numWithoutZeros(ll t)
{
    vector<int> num;
    vector<int>::iterator i;
    int p=0;
    ll n=0, ten=1;

    while (t)
    {
        p = t%10;
        
        if (p != 0)
        {
            num.push_back(p);
        }

        t = t/10;
    }

    for (i=num.begin(); i!=num.end(); i++)    
    {
        n += (*i * ten);
        ten *= 10;
    }

    return n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a=0, b=0, c=0, x=0, y=0, z=0;

    cin >> a >> b;
    c = a+b;

    x = numWithoutZeros(a);
    y = numWithoutZeros(b);
    z = numWithoutZeros(c);

    if ((x+y) == z)
    {
        cout << "YES\n";
    }
    else 
    {
        cout << "NO\n";
    }

    return 0;
}
