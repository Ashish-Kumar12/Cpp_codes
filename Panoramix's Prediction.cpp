#include <iostream>

using namespace std;

int main()
{
    long long n, m, i=2, nextPrime, flag=1;

    cin >> n >> m;

    nextPrime = n+1;

    while(flag)
    {
        for(i=2; i*i <= nextPrime; i++)
        {
            if(nextPrime % i == 0)
            {
               flag=0;
               break;
            }
        }

        if(flag)
        {
            break;
        }
        else
        {
            nextPrime++;
            flag = 1;
        }
    }

    if(nextPrime == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
