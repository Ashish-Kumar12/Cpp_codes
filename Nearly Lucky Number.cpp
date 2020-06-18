#include <iostream>
#define ll long long

using namespace std;

int main()
{
    ll n, cnt = 0, temp;

    cin >> n;

    while(n)
    {
        temp = n%10;
        if(temp == 4 || temp == 7)
        {
            cnt++;
        }
        n = n/10;
    }

    if(cnt == 4 || cnt == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
