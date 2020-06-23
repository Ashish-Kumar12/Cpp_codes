#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char words[10000];
    int len, i, j, dist=0;

    cin >> words;
    len = strlen(words);

    for(i=0; i< len; i++)
    {
        for(j=i; j<len; j++)
        {
            if(words[i] == words[j] && i != j)
            {
                dist++;
                break;
            }
        }
    }
    dist = len-dist;
    if(dist%2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
