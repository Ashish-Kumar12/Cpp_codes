#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[500], ans[500];
    int len, i, j=-1;

    cin >> str;

    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if(str[i] == '.')
        {
            ans[++j] = '0';
        }
        else if(str[i] == '-')
        {
            if(str[++i] == '.')
            {
                ans[++j] = '1';
            }
            else
            {
                ans[++j] = '2';
            }
        }
    }
    ans[++j] = '\0';
    cout << ans << endl;

    return 0;
}
