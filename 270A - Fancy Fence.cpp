#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=0, a=0;

    cin >> t;
    while (t--)
    {
        cin >> a;

        if ((360%(180-a)) == 0)
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}
