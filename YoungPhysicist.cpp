#include <iostream>

using namespace std;

int main()
{
    int n, x=0, y=0, z=0, temp;

    cin >> n;

    while(n--)
    {
        cin >> temp;
        x += temp;
        cin >> temp;
        y += temp;
        cin >> temp;
        z += temp;
    }

    if(!x && !y && !z)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
