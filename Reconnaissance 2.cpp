#include <iostream>

using namespace std;

int main()
{
    long int n, i, a, b, diff=10000000;

    cin >> n;
    long int arr[n+10];

    for(i=1; i <= n; ++i)
    {
        cin >> arr[i];
    }

    arr[0] = arr[n];
    arr[n+1] = arr[1];

    for(i=0; i<=n; i++)
    {
        if(abs(arr[i] - arr[i+1]) < diff)
        {
            diff = abs(arr[i] - arr[i+1]);
            a = i;
            b = i+1;

            if(a == 0)
            {
                a = n;
            }

            if(b == n+1)
            {
                b = 1;
            }
        }
    }

    cout << a << " " << b  << endl;

    return 0;
}
