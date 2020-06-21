#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[500000], str2[500000], ans[500000];
    int len, i;

    cin >> str1;
    cin >> str2;

    len = strlen(str1);

    for(i=0; i<len; i++)
    {
        if((str1[i] == '1' && str2[i] == '1') || (str1[i] == '0' && str2[i] == '0'))
        {
            ans[i] = '0';
        }
        else
        {
            ans[i] = '1';
        }
    }

    ans[i] = '\0';

    cout << ans << endl;

    return 0;
}
