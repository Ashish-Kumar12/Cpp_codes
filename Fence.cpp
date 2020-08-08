#include <iostream>

using namespace std;

int main()
{
    long long int i=0, n=0, k=0, sum=0, con=0, index=1;

    cin >> n >> k;
    long long int h[n];

    for(i=0; i<k; i++)
    {
        cin >> h[i];
        sum += h[i];
    }
    con=sum, index=1;

    for(i=k; i<n; i++)
    {
        cin >> h[i];
        con = con - h[i-k] + h[i];
        if(con < sum)
        {
            index = i-k+2;
            sum = con;
        }
    }

    cout << index << endl;

    return 0;
}
