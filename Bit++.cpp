#include <iostream>

using namespace std;

int main()
{
    long int n, i, x=0, flag;
    char op[100];

    cin >> n;

    while(n--)
    {
        cin >> op;
        flag=0;
        for(i=0; i<3; i++)
        {
            if(op[i] == '+')
            {
                flag = 1;
                break;
            }
            else if(op[i] == '-')
            {
                flag = 2;
                break;
            }
        }

        if(flag == 1)
        {
            x++;
        }
        else if(flag == 2)
        {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}
