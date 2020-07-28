#include <iostream>
#include <cstring>
#include <map>

#define MAXSIZE 100000
#define li long int
using namespace std;

int main()
{
    li i=0, len=0;
    char word[MAXSIZE];
    map<char, li> alphabets;
    map<char, li>::iterator itr;
    bool firstOdd = false, winFirst = true;

    cin >> word;

    len = strlen(word);
    for(i=0; i<len; i++)
    {
        alphabets.insert({word[i], 0});
        alphabets[word[i]]++;
    }

    for(itr = alphabets.begin(); itr != alphabets.end(); itr++)
    {
        if(itr->second%2 == 0)
        {
            continue;
        }
        else if(itr->second%2 != 0 && !firstOdd)
        {
            firstOdd = true;
        }
        else
        {
            winFirst = !winFirst;
        }        
    }

    if(winFirst)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
    

    return 0;
}
