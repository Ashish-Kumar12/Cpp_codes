#include <iostream>
#include <algorithm>

using namespace std;

struct team
{
    int p;
    int t;
};

bool teamComparator(const team& a, const team& b)
{
    return (a.p > b.p) || (a.p == b.p && a.t < b.t);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=0, k=0, i=0, x=0, y=0, cnt=0;

    cin >> n >> k;
    struct team teams[n];

    for(i=0; i<n; i++)
    {
        cin >> teams[i].p >> teams[i].t;
    }

    sort(teams, teams + n, teamComparator);
    x = teams[k-1].p;
    y = teams[k-1].t;

    for(i=0; i<n; i++)
    {
        if(teams[i].p == x && teams[i].t == y)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";
    
    return 0;
}

