#include <iostream>

using namespace std;

int main()
{
    long long int n=0, l=0, k=0, m=0, d=0, i=0, harmed=0;

    cin >> k >> l >> m >> n >> d;

    for(i=1; i<=d; i++)
    {
        if(i%k == 0 || i%l ==0 || i%m == 0 || i%n == 0)
        {
            harmed++;
        }
    }

    cout << harmed << endl;

    return 0;
}
