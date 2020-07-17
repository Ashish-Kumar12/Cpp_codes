#include <iostream>

using namespace std;

int main()
{
    long int n, i, j=1, total=0, cnt=0, temp;
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> temp;
        total += temp;
    }

    while(j <= 5)
    {
        if((total + j) % (n+1) != 1)
            cnt++;

        j++;
    }

    cout << cnt << endl;

    return 0;
}
