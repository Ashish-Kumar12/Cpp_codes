#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char first[1000], second[1000], a, b;
    int len, i, flag=0;

    cin >> first >> second;
    len = strlen(first);

    for(i=0; i<len; i++)
    {
        a = tolower(first[i]);
        b = tolower(second[i]);

        if(a != b)
        {
            if(a < b)
            {
                flag = -1;
            }
            else
            {
                flag = 1;
            }
            break;
        }
    }

    cout << flag << endl;

    return 0;
}
