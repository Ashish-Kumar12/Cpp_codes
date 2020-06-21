#include <iostream>

using namespace std;

int main()
{
    int n=0, i=0, j=0, maxHeight=0, minHeight=101, sec=0;
    cin >> n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] > maxHeight)
        {
            maxHeight = arr[i];
        }

        if(arr[i] < minHeight)
        {
            minHeight = arr[i];
        }
    }

    for(i=0; i<n; i++)
    {
        if(maxHeight == arr[i])
        {
            sec += i;
            break;
        }
    }

    for(j=n-1; j>=0; j--)
    {
        if(minHeight == arr[j])
        {
            sec += n-j-1;
            break;
        }
    }

    if(i > j)
    {
        sec-- ;
    }

    cout << sec << endl;

    return 0;
}
