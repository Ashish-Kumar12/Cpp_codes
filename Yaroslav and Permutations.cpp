#include <iostream>
#include <map>

using namespace std;

int main()
{
    int i=0, n=0, t=0;
    bool flag = false;

    map<int, int> num;
    map<int, int>::iterator map_itr;
    multimap<int, int> val;
    multimap<int, int>::reverse_iterator multi_itr;

    cin >> n;
    int ans[n];

    for(i=0; i<n; i++)
    {
        cin >> t;
        num.insert({t, 0});
        num[t]++;
    }

    for(map_itr = num.begin(); map_itr != num.end(); map_itr++)
    {
        val.insert({map_itr->second, map_itr->first});
    }

    t=0;
    multi_itr = val.rbegin();
    for(i=0; i<n; i+=2)
    {
        if(multi_itr->first == t)
        {
            multi_itr++;
            t=0;
        }

        ans[i] = multi_itr->second;
        t++;
    }

    for(i=1; i<n; i+=2)
    {
        if(multi_itr->first == t)
        {
            multi_itr++;
            t=0;
        }

        ans[i] = multi_itr->second;
        t++;
    }

    flag = true;
    for(i=1; i<n; i++)
    {
        if(ans[i-1] == ans[i])
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
