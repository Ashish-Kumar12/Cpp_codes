#include <bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> nums;
vector<ll>::iterator j, k;

void luckyNums(int arr[], int n);
void generateAllBinaryStrings(int n, int arr[], int i);

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	ll i=0, l=0, r=0, sum=0;

	for (i=1; i<=11; i++)
	{
		int arr[i];
		generateAllBinaryStrings(i, arr, 0);
	}

	cin >> l >> r;

	j = nums.begin();
	while (*j < l)
	{
		j++;
	}
	
	for (i=l; i<=r; )
	{
		if (*j <= r)
		{
			sum += (*j) * (*j - i + 1);
			i = *j+1;
			j++;
		}
		else 
		{
			sum += (*j) * (r - i + 1);
			i = r+1;
		}
	}

	cout << sum << endl;
	
	return 0;
}


void luckyNums(int arr[], int n) 
{ 
	ll x=0, y=0, z=0;
    for (int i = n-1; i >= 0; i--) { 
        if (arr[i] == 0)
        	y=4;
        else
        	y=7;
        	
        x += y*pow(10, z++);
    } 
    nums.push_back(x);
} 
  
// Function to generate all binary strings 
void generateAllBinaryStrings(int n, int arr[], int i) 
{ 
    if (i == n) { 
        luckyNums(arr, n); 
        return; 
    } 
  
    arr[i] = 0; 
    generateAllBinaryStrings(n, arr, i + 1); 
  
    arr[i] = 1; 
    generateAllBinaryStrings(n, arr, i + 1); 
} 
