#include <iostream>

using namespace std;

int main()
{
    long long int arr[4], change=0, i, j;

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    for(i=0; i<4; i++)
    {
        for(j=i; j<4; j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                change++;
                break;
            }
        }
    }

    cout << change << endl;
    return 0;
}
