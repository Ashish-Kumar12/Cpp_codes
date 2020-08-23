#include <iostream>
#include <algorithm>
#define ll long long int

using namespace std;

int main()
{
    ll n=0, i=0, cnt=0;

    cin >> n;
    ll nums[n];

    for(i=0; i<n; i++)
    {
        cin >> nums[i];
    }

    sort(nums, nums+n);

    for(i=0; i<n; i++)
    {
        cnt += abs(nums[i] - i - 1);
    }

    cout << cnt << "\n";

    return 0;
}

