#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n=0, m=0, i=0;

    cin >> n >> m;

    if(n < m)
    {
        for(i=0; i<n; i++)
        {
            cout << "GB";
        }
        for(i=n; i<m; i++)
        {
            cout << "G";
        }
    }
    else
    {
        for(i=0; i<m; i++)
        {
            cout << "BG";
        }    
        for(i=m; i<n; i++)
        {
            cout << "B";
        }
    }
    cout << endl;
    
    return 0;
}
