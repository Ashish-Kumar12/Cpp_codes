#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 0;

    cin >> n;
    
    if (n <= 10)
    {
        cout << "0\n";
    }
    else
    {
        n -= 10;

        if ((1 <= n && n <= 9) || n == 11)
        {
            cout << "4\n";
        }
        else if (n == 10)
        {
            cout << "15\n";
        }
        else 
        {
            cout << "0\n";
        }
    }
    
    return 0;
}
