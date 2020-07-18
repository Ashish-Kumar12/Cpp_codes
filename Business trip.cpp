#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll k=0, growth[12], i=0, total=0, minMonths=0;
    bool flag=false;

    cin >> k;
    for(i=0; i<12; i++)
    {
        cin >> growth[i];
    }

    sort(growth, growth+12, greater<int>());

    for(i=0; i<12; i++)
    {
        if(total < k && growth[i] != 0)
        {
            total += growth[i];
            minMonths++;
        }
        if(total >= k)
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        cout << minMonths << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    

    return 0;
}
