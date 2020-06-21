#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ques[10000], ans[10000];
    long long int i=0, len=0, j=0, k=0;

    cin >> ques;
    len = strlen(ques);

    for(i=0; i<len; i++)
    {
        if(ques[i] == '1')
        {
            ans[j++] = '1';
            ans[j++] = '+';
        }
    }

    for(i=0; i<len; i++)
    {
        if(ques[i] == '2')
        {
            ans[j++] = '2';
            ans[j++] = '+';
        }
    }

    for(i=0; i<len; i++)
    {
        if(ques[i] == '3')
        {
            ans[j++] = '3';
            ans[j++] = '+';
        }
    }

    ans[len] = '\0';
    cout << ans << endl;
    return 0;
}
