#include <iostream>
#include <vector>
#include <map>

#define ll long long int

using namespace std;

int main()
{
    ll n=0, i=0, temp=0, diff=0, len=0;
    map<ll, vector<ll>> digits;
    map<ll, vector<ll>>::iterator itr;
    map<ll, ll> ans;
    map<ll, ll>::iterator itr2;
    bool flag=true;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> temp;
        digits[temp].push_back(i);
    }

    for(itr=digits.begin(); itr!=digits.end(); itr++)
    {
        flag = true;
        if(itr->second.size() == 1)
        {
            diff = 0;
        }
        else
        {
            diff = abs(itr->second[1] - itr->second[0]);
            len = itr->second.size();
            for(i=1; i<len-1; i++)
            {
                if(diff != abs(itr->second[i+1] - itr->second[i]))
                {
                    flag=false;
                    break;
                }
            }
        }

        if(flag)
        {
            ans.insert({itr->first, diff});
        }
    }

    cout << ans.size() << endl;
    for(itr2 = ans.begin(); itr2 != ans.end(); itr2++)
    {
        cout << itr2->first << " " << itr2->second << endl;
    }

    return 0;
}
