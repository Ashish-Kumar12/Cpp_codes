#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char first[1000], second[1000], third[1000], alphabets[1000], ch;
    int a_len, t_len, i, j, verify, flag;

    cin >> first >> second >> third;
    strcpy(alphabets, first);
    strcat(alphabets, second);
    a_len = strlen(alphabets);
    t_len = strlen(third);

    int arr[a_len], str[t_len];

    for(i=0; i<a_len; i++)
    {
        arr[i] = 0;
    }
    for(j=0; j<t_len; j++)
    {
        str[j] = 0;
    }

    //missing char
    for(i=0; i<a_len; i++)
    {
        ch = alphabets[i];
        flag = 0;
        for(j=0; j<t_len && !flag; j++)
        {
            if(ch == third[j] && !str[j])
            {
                flag = 1, str[j] = 1;
                break;
            }
        }
        if(!flag)
        {
            break;
        }
    }

    //extra char
    for(i=0; i<t_len; i++)
    {
        ch = third[i];
        verify = 0;
        for(j=0; j<a_len && !verify; j++)
        {
            if(ch == alphabets[j] && !arr[j])
            {
                verify = 1, arr[j] = 1;
                break;
            }
        }
        if(!verify)
        {
            break;
        }
    }

    if(!flag || !verify)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
