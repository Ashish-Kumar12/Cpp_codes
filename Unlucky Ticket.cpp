
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long int n=0, i=0;

    string s, l, r;

    cin >> n >> s;

    l = s.substr(0, n);
    r = s.substr(n, n);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());

    bool strictly_less(true), strictly_more(true);

    for (i = 0; i < n; ++i)
    {
        if (l[i] >= r[i])
        {
            strictly_less = false;
            break;
        }
    }

    for (i = 0; i < n; ++i)
    {
        if (l[i] <= r[i])
        {
            strictly_more = false;
            break;
        }
    }

    cout << ((strictly_less || strictly_more) ? "YES" : "NO") << endl;

    return 0;
}
