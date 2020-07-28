#include <bits/stdc++.h>

using namespace std;

int main()
{
    char word[10000], hello[] = "hello";
    long int i=0, j=0, len=0;

    cin >> word;

    len = strlen(word);
    for(i=0, j=0; i<len; i++)
    {
        if(word[i] == hello[j])
        {
            j++;
        }
    }

    if(j >= 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

    return 0;
}
