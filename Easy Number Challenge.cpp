#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    const ll mod = 1073741824, s = 1000010;
    const ll primeNum[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229};

    ll a=0, b=0, c=0, i=0, j=0, k=0, sum=0, cnt=1, cur=0, d[s]={0}, t =0;

    cin >> a >> b >> c;
    
    t = a*b*c;
    for(i=1; i<s && i<=t; i++)
    {
        k = i;
        cnt = 1;
        for(j=0; j<50 && k != 1; j++)
        {
            cur = 0;
            if(k % primeNum[j] == 0)
            {
                while (k % primeNum[j] == 0)
                {
                    k /= primeNum[j];
                    cur++;
                }
                cnt *= (cur + 1);
            }
        }
        d[i] = cnt;
    }

    sum = 0;
    for(i=1; i<=a; i++)
    {
        for(j=1; j<=b; j++)
        {
            for(k=1; k<=c; k++)
            {
                sum += d[i*j*k];
            }
        }
    }

    cout << sum%mod << endl;
    
    return 0;
}
