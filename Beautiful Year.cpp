#include <iostream>

using namespace std;

int main()
{
    int year, i, num[4];

    cin >> year;
    i = year + 1;

    while(true)
    {
        num[0] = i % 10;
        num[1] = (i/10)%10;
        num[2] = (i/100)%10;
        num[3] = i/1000;

        if(num[0] == num[1] || num[0] == num[2] || num[0] == num[3])
        {
            i++;
            continue;
        }

        if(num[1] == num[2] || num[1] == num[3])
        {
            i++;
            continue;
        }

        if(num[2] == num[3])
        {
            i++;
            continue;
        }
        else
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
