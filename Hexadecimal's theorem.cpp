#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n=0, fib[10000], i=1, j=0, k=0, a=0, b=0, c=0, flag=0, total=0;
    
    cin >> n;
    
    if(n == 0)
    {
        flag = 1;
    }
    else if(n == 1)
    {
        c = 1, flag = 1;
    }
    else if(n == 2)
    {
        c = 1, b = 1, flag = 1;
    }
    else
    {
        fib[0]=0;
        fib[1]=1;
        
        while(fib[i++] < n)
        {
            fib[i] = fib[i-1] + fib[i-2];
        } 
        i -= 2;
        
        while(i >= 2 && !flag)
        {
            c = fib[i];
            j = i;
            while(!flag && j)
            {
                b = fib[j];
                k = j;
                total = n+1;
                while( !flag && total > n && k)
                {
                    a = fib[k];
                    total = 0;
                    total = a + b + c; 
                    if(total == n)
                    {
                        flag = 1;
                    }
                    k--;
                }
                j--;
            }
            i--;
        }
    }
    
    if(flag)
    {
        cout << a << " " << b << " " << c << endl;
    }
    else
    {
        cout << "I'm too stupid to solve this problem" << endl;
    }
    
    return 0;
}
