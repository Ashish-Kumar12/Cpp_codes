#include <iostream>

using namespace std;

int main()
{
    char str[1000];
    int i=0, flag=0;

    cin >> str;

    while(str[i] != '\0' && !flag)
    {
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            flag = 1;
        }
        i++;
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
