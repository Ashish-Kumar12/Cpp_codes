#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n=0, k=0, i=0, coins=0;
    char ch;
    long long int chars[27] = {0};

    cin >> n >> k;

    for (i=0; i<n; i++)
    {
        cin >> ch;
        chars[ch - 'A']++;
    }
    sort(chars, chars+27, greater<long long int>());

    for (i=0; i<27 && k>0; i++)
    {
        if ((k - chars[i]) >= 0)
        {
            coins += chars[i]*chars[i];
            k -= chars[i];
            chars[i] = 0;
        }
        else if (k > 0)
        {
            coins += k*k;
            k = 0;
            chars[i] -= k;
        }
    }

    cout << coins << "\n";
    
    return 0;
}
