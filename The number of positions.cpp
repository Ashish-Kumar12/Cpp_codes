#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    ll n=0, a=0, b=0, noOfPositions=0, posA=0, posB=0;

    cin >> n >> a >> b;

    posA = a + 1;
    posB = n - b;

    noOfPositions = n - max(posA, posB) + 1;

    cout << noOfPositions << endl;

    return 0;
}
