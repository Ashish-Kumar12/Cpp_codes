#include <iostream>

using namespace std;

int main()
{
    long long int n=0, i=0, minDistance = 99999999999, flag=0, index=0;
    
    cin >> n;
    long long int towns[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> towns[i];
        
        if(towns[i] <= minDistance)
        {
            if(towns[i] == minDistance)
            {
                flag = 1;
            }
            else
            {
                minDistance = towns[i];
                index = i + 1;
                flag = 0;
            }
        }
    }
    
    if(!flag)
    {
        cout << index << endl;
    }
    else
    {
        cout << "Still Rozdil" << endl;
    }

    
    return 0;
}
