#include <iostream>

using namespace std;

int main()
{
    char number[100], temp[3];
    long long int len=0, i=0;
    bool flag = true;
    
    cin >> number;
    
    while(number[i++] != '\0');
    len = i-1;
    i = len-1;
    
    while(i>=0 && flag)
    {
        if(number[i] == '4')
        {
            if(number[i-1] == '4')
            {
                if(number[i-2] == '1')
                {
                    i -= 3;
                }
                else
                {
                    flag = false;
                }
            }
            else if(number[i-1] == '1')
            {
                i -= 2;
            }
            else
            {
                flag = false;
            }
        }
        else if(number[i] == '1')
        {
            i -= 1;
        }
        else
        {
            flag = false;
        }
    }
    
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
