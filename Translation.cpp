#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    char word_s[1000], word_t[1000], rev[1000];
    ll length=0, i=0;
    bool flag = true;

    cin >> word_s;
    cin >> word_t;

    while(word_t[length++] != '\0');
    length -= 1;

    for(i=0; i<length; i++)
    {
        rev[i] = word_t[length-i-1];
    }

    for(i=0; i<length; i++)
    {
        if(rev[i] != word_s[i])
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
