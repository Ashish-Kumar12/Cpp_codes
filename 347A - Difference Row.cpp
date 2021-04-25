#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n=0, i=0;
	
	cin >> n;
	int arr[n];
	
	for (i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	sort (arr, arr+n);
	i = arr[0];
	arr[0] = arr[n-1];
	arr[n-1] = i;
	
	for (i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
