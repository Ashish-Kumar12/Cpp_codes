#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=0, k=0, i=0, j=0;

    cin >> n >> k;

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i == j)
            {
                cout << k << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
