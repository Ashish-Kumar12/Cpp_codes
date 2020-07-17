#include <iostream>

using namespace std;

int main()
{
    long long int n, mon, tues, wed, thur, fri, sat, sun, total = 0, day, temp;

    cin >> n;
    cin >> mon >> tues >> wed >> thur >> fri >> sat >> sun;

    total = mon + tues + wed + thur + fri + sat + sun;

    temp = n%total;

    if(temp != 0)
    {
        n = temp;
    }

    while(n > 0)
    {
        n -= mon;

        if(n <= 0)
        {
            day=1;
            break;
        }

        n -= tues;

        if(n <= 0)
        {
            day=2;
            break;
        }

        n -= wed;

        if(n <= 0)
        {
            day=3;
            break;
        }

        n -= thur;

        if(n <= 0)
        {
            day=4;
            break;
        }

        n -= fri;

        if(n <= 0)
        {
            day=5;
            break;
        }

        n -= sat;

        if(n <= 0)
        {
            day=6;
            break;
        }

        n -= sun;

        if(n <= 0)
        {
            day=7;
            break;
        }
    }

    cout << day << endl;

    return 0;
}
