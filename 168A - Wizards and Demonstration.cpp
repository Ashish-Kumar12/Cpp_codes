#include <iostream>

using namespace std;

int main()
{
    long int n=0, k=0, x=0, y=0, t=0;

    cin >> n >> x >> y;

    t = (n*y + 100 - 1)/100;

    k = t - x;

    if (k > 0)
    {
        cout << k << "\n";
    }
    else
    {
        cout << "0\n";
    }

    return 0;
}
