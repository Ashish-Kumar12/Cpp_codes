#include <iostream>

using namespace std;

int main()
{

    unsigned long long int n=0, k=0, index=0;

    cin >> n >> k;

    if(n%2 == 0)
    {
        if(k > n/2)
        {
            index = (k - (n/2))*2 ;
        }
        else
        {
            index = (k*2) - 1 ;
        }
    }
    else
    {
        if(k > (n+1)/2)
        {
            index = (k - (n/2) - 1)*2 ;
        }
        else
        {
            index = (k*2) - 1 ;
        }
    }

    cout << index << endl;

    return 0;
}
