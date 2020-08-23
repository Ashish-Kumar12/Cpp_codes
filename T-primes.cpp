#include <iostream>
#include <cstring>

using namespace std;

long long int primeNums[78510] = {0}, cnt=0;

void SieveOfEratosthenes(long long int n) 
{ 
    bool prime[n];
    long long int p=0, i=0;
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    memset(prime, true, sizeof(prime)); 
  
    for (p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (i=p*p; i<=n; i += p) 
            {
                prime[i] = false; 
            }
        } 
    } 
  
    // Print all prime numbers 
    for (p=2; p<=n; p++) 
       if (prime[p]) 
       {
            // cout << p << " "; 
            primeNums[cnt] = p*p;
            cnt++;
       }
} 

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int const SIZE = 1000010;
    long long int n=0, i=0, t=0, l=0, r=0, m=0;

    SieveOfEratosthenes(SIZE);

    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> t;
        l=0, r=cnt-1;

        while(l <= r)
        {
            m = (l+r)/2;
            
            if (t == primeNums[m])
            {
                cout << "YES\n";
                break;
            }
            else if (t < primeNums[m])
            {
                r = m-1;
            }
            else if (t > primeNums[m])
            {
                l = m+1;
            }
        }
        if(l > r)
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}

