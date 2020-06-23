#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    long long int n, len;
    char word[10000];
    cin >> n;

    while(n--)
    {
        cin >> word;
        len = strlen(word);
        if(len > 10)
        {
            cout << word[0] << len-2 << word[len-1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}
