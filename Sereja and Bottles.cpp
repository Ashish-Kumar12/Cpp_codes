#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=0, i=0, j=0, cnt=0;

    cin >> n;
    int a[n] = {0}, b[n] = {0};
    bool isOpen[n];
    memset(isOpen, false, n*(sizeof(bool)));

    for (i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i == j)
                continue;

            if (b[i] == a[j])
            {
                isOpen[j] = true;
            }
        }
    }

    for (i=0; i<n; i++)
    {
        if (isOpen[i] == false)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}

