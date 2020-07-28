#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    ll t=0, sx=0, sy=0, ex=0, ey=0, i=0;
    bool reached = false;

    cin >> t >> sx >> sy >> ex >> ey;
    char path[t+10];
    cin >> path;

    for(i=0; i<t; i++)
    {
        if(path[i] == 'E')
        {
            if(sx < ex)
            {
                sx += 1;
            }
        }
        else if(path[i] == 'S')
        {
            if(sy > ey)
            {
                sy -= 1;
            }
        }
        else if(path[i] == 'W')
        {
            if(sx > ex)
            {
                sx -= 1;
            }
        }
        else if(path[i] == 'N')
        {
            if(sy < ey)
            {
                sy += 1;
            }
        }

        if((ex == sx) && (sy == ey))
        {
            reached = true;
            break;
        }
    }

    if(reached)
    {
        cout << i+1 << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
