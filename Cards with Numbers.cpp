#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);

    int n,i,k,p,l;

    while (scanf ("%d",&n) != EOF)
    {
        map <int, vector<int>> mp;
        map <int, vector<int>> :: iterator it;

        for (i=1; i<=2*n; i++)
        {
            scanf ("%d",&k);
            mp[k].push_back(i);
        }

        p = 1;

        for (it=mp.begin(); it!=mp.end(); it++)
        {
            if ((it->second).size() & 1)
            {
                p = 0;
                printf ("-1\n");
                break;
            }
        }

        if (p)
        {
            for (it=mp.begin(); it!=mp.end(); it++)
            {
                l = (it->second).size();

                for (i=0; i<l; i+=2)
                    printf ("%d %d\n",(it->second)[i],(it->second)[i+1]);
            }
        }

        mp.clear();
    }

    return 0;
}
