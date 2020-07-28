#include <iostream>

using namespace std;

int main()
{
    const long long int s = 1000000;

    char first[s], second[s], arr[4];
    long long int len1=0, len2=0, i=0, diff=0, x=0;
    bool ans=false;

    cin.getline(first, s);
    cin.getline(second, s);

    while(first[len1] != '\0')
    {
        len1++;
    }
    while(second[len2] != '\0')
    {
        len2++;
    }

    if(len1 == len2)
    {
        for(i=0; i<len1; i++)
        {
            if(first[i] != second[i])
            {
                diff++;
                if(x < 4)
                {
                    arr[x++] = first[i];
                    arr[x++] = second[i];
                }
            }
        }

        if(diff == 2 && arr[0] == arr[3] && arr[1] == arr[2])
        {
            ans = true;
        }
        else
        {
            ans = false;
        }
    }
    else
    {
        ans = false;
    }

    if(ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
