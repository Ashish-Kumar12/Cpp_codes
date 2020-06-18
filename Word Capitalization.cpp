#include <iostream>

using namespace std;

int main()
{
    char word[1000000];

    cin >> word;

    word[0] = toupper(word[0]);

    cout << word;

    return 0;
}
