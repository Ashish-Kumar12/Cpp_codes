#include <bits/stdc++.h>
#define ll long long int
#define maxSize 10000

using namespace std;

int main()
{
    char situation[maxSize]="", firstTeam[]="1111111", secondTeam[]="0000000";

    ll len=0, i=0, j=0;

    bool isDangerous=false;

    cin >> situation;
    len = strlen(situation);

    for(i=0, j=0; i<len && !isDangerous; )
    {
        if(situation[i] == firstTeam[j])
        {
            for(j=1; j<7; j++)
            {
                if(situation[i+j] != firstTeam[j])
                {
                    i = i+j;
                    j = 0;
                    break;
                }
            }
            if(j == 7)
                isDangerous = true;
        }
        else
        {
            for(j=1; j<7; j++)
            {
                if(situation[i+j] != secondTeam[j])
                {
                    i = i+j;
                    j = 0;
                    break;
                }
            }
            if(j == 7)
                isDangerous = true;
        }
    }

    if(isDangerous)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

    return 0;
}
