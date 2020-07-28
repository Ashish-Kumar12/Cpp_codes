#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    ll n=0, i=0, j=0, k=0, x=0, temp=0;
    bool flag = true;

    cin >> n;
    ll ans[n/3][3] = {0}, nums[8] = {0};

    for(i=0; i<n; i++)
    {
        cin >> temp;
        nums[temp]++;
    }

    for(i=1, x=0; i<8; i++)
    {
        for(j=i+1; j<8; j++)
        {
            for(k=j+1; k<8; k++)
            {
                if(j%i == 0 && k%j == 0)
                {
                    while(nums[i] && nums[j] && nums[k])
                    {
                        ans[x][0] = i;
                        ans[x][1] = j;
                        ans[x][2] = k;
                        nums[i]--;
                        nums[j]--;
                        nums[k]--;
                        x++;
                    }
                }
            }
        }
    }

    for(i=0, flag=true; i<8; i++)
    {
        if(nums[i] != 0)
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        for(i=0; i<x; i++)
        {
            cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
        }
    }
    else
    {
        cout << "-1" << endl;
    }
    
    return 0;
}
