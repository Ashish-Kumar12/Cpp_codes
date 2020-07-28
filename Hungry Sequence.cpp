#include <iostream>

using namespace std;

int main()
{
    long long int n=0, i=0;

    cin >> n;

    for (i = 10000000 - n; i < 10000000; i++)
    {
        cout << i << " ";
    }
    
    return 0;
}
