#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {

    ll n=0, m=0, i=0, maxSum=0;

    cin >> n >> m;
    ll tvPrice[n+10];

    for(i=0; i<n; i++)
    {
        cin >> tvPrice[i];
    }

    sort(tvPrice, tvPrice+n);

    for(i=0; i<m; i++)
    {
        if(tvPrice[i] <= 0)
            maxSum += abs(tvPrice[i]);
    }

    cout << maxSum << endl;

    return 0;
}
