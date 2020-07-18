
#include <iostream>
#include <map>
#include <string>
#define ll long long int

using namespace std;

int main()
{
    ll n=0, i=0;
    string currentTeam;
    map <string, int> teams;
    map <string, int>::iterator itr, itr2;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> currentTeam;
        teams.insert({currentTeam, 0});
        teams[currentTeam]++;
    }

    if(teams.size() == 2) {
        itr = teams.begin();
        itr2 = itr++;
        if (itr->second > itr2->second) {
            cout << itr->first << endl;
        } else {
            cout << itr2->first << endl;
        }
    } else
    {
        itr = teams.begin();
        cout << itr->first << endl;
    }

    return 0;
}
