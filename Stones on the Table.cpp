#include <iostream>

using namespace std;

int main()
{
    char stones[100];
    int len, i, removes = 0;

    cin >> len;

    cin >> stones;
    i=0;
    while(i < len - 1)
    {
       if(stones[i] == stones[i+1])
       {
           removes++;
       }
       i++;
    }

    cout << removes << endl;

    return 0;
}
