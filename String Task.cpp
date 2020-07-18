#include <bits/stdc++.h>
#define ll long long int
#define MAXSIZE 10000

using namespace std;

int main()
{
    char ans[MAXSIZE]="", str[MAXSIZE]="", ch=' ';
    ll i=0, j=0, len=0;

    cin >> str;

    len = strlen(str);
    for(i=0; i<len; i++)
    {
        ch = tolower(str[i]);
        if(ch=='a' || ch=='o' || ch=='y' || ch=='e' || ch=='u' || ch=='i')
        {
            continue;
        }
        else
        {
            ans[j++] = '.';
            ans[j++] = ch;
        }
    }
    ans[j] = '\0';

    len = strlen(ans);
    for(i=0; i<len; i++)
    {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
