#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n=0, m=0, i=0, minC=0, maxC=0, minW=0, tl=0;

    cin >> n >> m;
    int c[n], w[m];

    for(i=0; i<n; i++)
    {
        cin >> c[i];
    }
    for(i=0; i<m; i++)
    {
        cin >> w[i];
    }

    sort(c, c+n);
    sort(w, w+m);

    minC = c[0];
    maxC = c[n-1];
    minW = w[0];

    tl = max(maxC, 2*minC);

    if(tl < minW)
    {
        cout << tl << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    
    return 0;
}
