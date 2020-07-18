#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[10000] = "", ans[10000] = "", subStr[10000] = "", ch;
    long long int k=0, i=0, len=0, times=0, j=0;
    bool flag = true;
    map <char, int> alphabets;
    map <char, int> :: iterator itr;

    cin >> k;
    cin >> s;

    len = strlen(s);

    for(i=0; i<len; i++)
    {
        ch = s[i];
        alphabets.insert({ch, 0});
        alphabets[ch]++;
    }

    for(itr = alphabets.begin(); itr != alphabets.end(); itr++)
    {
        if(itr->second % k != 0)
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        len = alphabets.size();

        for(itr = alphabets.begin(); itr != alphabets.end(); itr++)
        {
            times = itr->second / k;
            for(i=0; i<times; i++)
            {
                subStr[j++] = itr->first;
            }
        }
        subStr[j] = '\0';

        for (i = 0; i < k; i++)
        {
            strcat(ans, subStr);
        }

        len = strlen(ans);
        for(i=0; i<len; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
