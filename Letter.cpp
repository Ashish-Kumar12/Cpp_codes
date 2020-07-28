#include <iostream>
#include <map>

using namespace std;

int main()
{
    char heading[300], text[300];
    int lenHeading=0, lenText=0;
    bool ans = true;

    map<char, int> headingMap, textMap;
    map<char, int>::iterator itr;

    cin.getline(heading, 300);
    cin.getline(text, 300);
    // scanf("%[^\n]s", heading);
    // fflush(stdin);
    // scanf("%[^\n]s", text);

    while(heading[lenHeading] != '\0')
    {
        if(heading[lenHeading] != ' ')
        {
            headingMap.insert({heading[lenHeading], 0});
            headingMap[heading[lenHeading]]++;
        }
        lenHeading++;
    }
    while(text[lenText] != '\0')
    {
        if(text[lenText] != ' ')
        {
            textMap.insert({text[lenText], 0});
            textMap[text[lenText]]++;
        }
        lenText++;
    }

    for(itr = textMap.begin(); itr != textMap.end(); itr++)
    {
        itr->second = (itr->second - headingMap[itr->first]);
        if(itr->second > 0)
        {
            ans = false;
            break;
        }
    }

    if(ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
