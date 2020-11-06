#include <iostream>
#define ll long long int

using namespace std;

string convert(string num)
{
	ll sum=0, i=0, len=0, x=0;
	string newNum;
	
	len = num.size();
	for (i=0; i<len; i++)
	{
		sum += (num[i] - '0');
	}
	
	while (sum)
	{
		x = sum%10;
		newNum.push_back(x + '0');
		sum /= 10;
	}
	
	return newNum;
}

int main()
{
	string num;
	ll transform=0;
	
	cin >> num;
	
	while (num.size() > 1)
	{
		num = convert(num);
		transform++;
	}
	
	cout << transform << endl;
	
	return 0;
}
