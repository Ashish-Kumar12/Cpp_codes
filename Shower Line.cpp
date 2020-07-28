#include <iostream>
#include <algorithm>
#define ll long long int

using namespace std;

int main()
{
    const ll d = 5;

    ll i=0, j=0, s[d][d] = {0}, a[d] = {0, 1, 2, 3, 4}, temp=0, sum=0;

    for(i=0; i<d; i++)
    {
        for(j=0; j<d; j++)
        {
            cin >> s[i][j];
        }
    }

    sum = 0;
    do
    {
        temp = 0;

        // 12 + 21 + 34 + 43
        temp += (s[a[0]][a[1]] + s[a[1]][a[0]] + s[a[2]][a[3]] + s[a[3]][a[2]]);

        // 23 + 32 + 45 + 54
        temp += (s[a[1]][a[2]] + s[a[2]][a[1]] + s[a[3]][a[4]] + s[a[4]][a[3]]);

        // 34 + 43
        temp += (s[a[2]][a[3]]+ s[a[3]][a[2]]);

        // 45 + 54
        temp += (s[a[3]][a[4]] + s[a[4]][a[3]]);

        if(temp > sum)
        {
            sum = temp;
        }

    } while (next_permutation(a, a + d));

    cout << sum << endl;    

    return 0;
}

