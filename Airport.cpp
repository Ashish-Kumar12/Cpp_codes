#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n=0, m=0;
    ll i=0, temp=0, sumMin=0, sumMax=0, passengers=0;

    cin >> n >> m;
    ll planesMin[m], planesMax[m];

    for(i=0; i<m; i++)
    {
        cin >> temp;
        planesMin[i] = temp;
        planesMax[i] = temp;
    }

    passengers = n, i = 0;
    sort(planesMin, planesMin+m);
    while(passengers>0)
    {
        while(planesMin[i] == 0)
            i++;
        
        sumMin += planesMin[i];
        planesMin[i]--;
        passengers--;
    }


    passengers = n, i = 0;
    while (passengers > 0)
    {
        sort(planesMax, planesMax+m, greater<ll>());

        sumMax += planesMax[0];
        planesMax[0]--;
        passengers--;
    }
    

    cout << sumMax << " " << sumMin << endl;

    return 0;
}
