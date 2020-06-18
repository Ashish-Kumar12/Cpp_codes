#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[200], ch;
    int i=0, len=0, upp=0;

    cin >> str;

    while(str[i] != '\0')
    {
        ch = str[i];
        if(isupper(ch))
            upp++;
        len++, i++;
    }

    if(upp <= len/2)
    {
        for(i=0; i<len; i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    else
    {
        for(i=0; i<len; i++)
        {
            str[i] = toupper(str[i]);
        }
    }

    cout << str;

    return 0;
}
