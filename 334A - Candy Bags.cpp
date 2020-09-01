#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=0, i=0, j=0, a=0, b=0;

    cin >> n;

    a = 1;
    b = n*n;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n/2; j++)
        {
            if (j == n/2)
                cout << a << " " << b;
            else 
                cout << a << " " << b << " ";
            
            a++, b--;
        }
        cout << "\n";
    }
    
    return 0;
}
