#include <bits/stdc++.h>

using namespace std;

int main()
{
    char dub[4] = "WUB", song[10000], original[10000] {' '}, temp[4];
    long int i=0, j=0 ,len=0;

    cin >> song;
    
    len = strlen(song);
    
    for(i=0; i<len;)
    {
        if(song[i] == 'W')
        {
            if(song[i+1] == 'U')
            {
                if(song[i+2] == 'B')
                {
                    if(j>0)
                    {
                        if(original[j-1] != ' ')
                        {
                            original[j++] = ' ';
                        }
                    }
                    i += 3;
                }
                else
                {
                    original[j++] = 'W';
                    original[j++] = 'U';
                    i += 2;
                }
            }
            else
            {
                original[j++] = 'W';
                i += 1;
            }
        }
        else
        {
            original[j++] = song[i];
            i += 1;
        }
        
    }

    len = j;
    original[j] = '\0';

    for(i=0; i<len; i++)
    {
        cout << original[i];            
    }
    cout << endl;

    return 0;
}
