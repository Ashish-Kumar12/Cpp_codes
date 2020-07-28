#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    long long int n=1000000, i=0, j=0;
    bool firstZero=false;
    char seq[n], ans[n];
    
    cin >> seq;
    n = strlen(seq);

    for(i=0, j=0; i<n; i++)
    {
        if((seq[i]=='0') && !firstZero)
        {
            firstZero = true;
        }
        else
        {
            ans[j++] = seq[i];
        }
    }

    if(!firstZero)
    {
        j--;
    }
    ans[j] = '\0';

    for(i=0; i<j; i++)
    {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
