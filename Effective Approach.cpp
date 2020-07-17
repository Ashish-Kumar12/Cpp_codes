#include <iostream>

using namespace std;

int main()
{
    long long int n=0, m=0, i=0, temp=0, cnt_vasya=0, cnt_petya=0;

    cin >> n;
    long long int arr[n+10] {0}, comp_vasya[n+10] {0}, comp_petya[n+10] {0};

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
        comp_vasya[arr[i]-1] = i+1;
        comp_petya[arr[i]-1] = n-i;
    }

    cin >> m;

    for(i=0; i<m; i++)
    {
        cin >> temp;
        cnt_vasya += comp_vasya[temp-1];
        cnt_petya += comp_petya[temp-1];
    }

    cout << cnt_vasya << " " << cnt_petya << endl;

    return 0;
}
