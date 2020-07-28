#include <iostream>

using namespace std;

int main()
{
    long int n=0, i=0, temp=0, one=0, two=0;
    bool ans=false;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> temp;
        if(temp == 100)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    if(one%2 == 0 && two%2 == 0)
    {
        ans = true;
    }
    else if(one%2 == 0 && two%2 != 0)
    {
        if((one-2) >= 0 && (two-1) >= 0)
        {
            ans = true;
        }
        else
        {
            ans = false;
        }
    }
    else if(one%2 != 0 && two%2 == 0)
    {
        ans = false;
    }
    else
    {
        ans = false;
    }
    
    if(ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}

