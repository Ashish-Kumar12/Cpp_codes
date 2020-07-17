#include <iostream>

using namespace std;

int main()
{
    long int n, m, i, done=0, last;

    cin >> n >> m;
    long int candies[n], line[n];

    for(i=0; i<n; i++)
    {
        cin >> candies[i];
        line[i] = i+1;
    }
    last = n;
    while(!done)
    {
        done=1;
        for(i=0; i<n; i++)
        {
            if(line[i] != 0)
            {
                if(m >= candies[i])
                {
                    line[i] = 0;
                }
                else
                {
                    candies[i] -= m;
                    last = i+1;
                    done=0;
                }
            }
        }
    }

    cout << last << endl;

    return 0;
}
