#include <iostream>

using namespace std;

int main()
{
    long long int n=0, a=0, b=0, maxCapacity=0, current=0;

    cin >> n;

    while(n--)
    {
        cin >> a >> b;
        current -= a;
        current += b;
        if(current > maxCapacity)
        {
            maxCapacity = current;
        }
    }

    cout << maxCapacity;

    return 0;
}
