#include <iostream>

using namespace std;

int main()
{
    long long int n=0, i=0, total=0, flag=0, numFive=0, numZero=0;
    
    cin >> n;
    long long int cards[n+10];
    
    for(i=0; i<n; i++)
    {
        cin >> cards[i];
        if(cards[i] == 0)
        {
            flag = 1;
            numZero++;
        }
        else
        {
            total += cards[i];
        }
    }    
    
    if(flag)
    {
        while(total % 9 != 0 && total % 5 == 0 && total)
        {
            total -= 5;
        }
        
        if(total != 0)
        {
            numFive = total / 5;
        }
        
        for(i=0; i<numFive; i++)
        {
            cout << "5";
        }
        
        if(numFive != 0)
        {
            for(i=0; i < numZero; i++)
            {
                cout << "0";
            } 
        }
        else
        {
            cout << "0";
        }
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    
    return 0;
}
