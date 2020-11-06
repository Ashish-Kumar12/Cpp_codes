#include <iostream>
#include <vector>

using namespace std;

vector<int> luckyNums;

void generateLuckNums(int arr[], int n) 
{ 
    int ten = 1, num=0;

	for (int i = 0; i < n; i++) { 

        if (arr[i] == 0)
		    num += (4*ten);
        else
            num += (7*ten);
        
        ten *= 10;
	} 

    luckyNums.push_back(num);
} 

// Function to generate all binary strings 
void generateAllBinaryStrings(int n, int arr[], int i) 
{ 
	if (i == n) { 
		generateLuckNums(arr, n); 
		return; 
	} 

	// First assign "0" at ith position 
	// and try for all other permutations 
	// for remaining positions 
	arr[i] = 0; 
	generateAllBinaryStrings(n, arr, i + 1); 

	// And then assign "1" at ith position 
	// and try for all other permutations 
	// for remaining positions 
	arr[i] = 1; 
	generateAllBinaryStrings(n, arr, i + 1); 
} 

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int arr[3];
    generateAllBinaryStrings(1, arr, 0);
    generateAllBinaryStrings(2, arr, 0);
    generateAllBinaryStrings(3, arr, 0);

    int n=0;
    bool ans = false;
    cin >> n;

    for (auto num : luckyNums)
    {
        if (n%num == 0)
        {
            ans = true;
            break;
        }
    }

    if (ans)
    {
        cout << "YES\n";
    }
    else 
    {
        cout << "NO\n";
    }
    
    return 0;
}
