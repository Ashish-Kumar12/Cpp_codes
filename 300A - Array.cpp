#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> s1, s2, s3;
	vector<int>::iterator i;
	
	int n=0, x=0;
	
	cin >> n;
	
	for (int j=0; j<n; j++)
	{
		cin >> x;
		
		if (x < 0)
		{
			s1.push_back(x);
		}
		else if (x == 0)
		{
			s3.push_back(x);
		}
		else
		{
			s2.push_back(x);
		}
	}
	
	if (s2.size() == 0)
	{
		s2.push_back(s1.back());
		s1.pop_back();
		s2.push_back(s1.back());
		s1.pop_back();
	}
	
	if (s1.size()%2 == 0)
	{
		s3.push_back(s1.back());
		s1.pop_back();
	}
	
	cout << s1.size();
	for (i=s1.begin(); i!=s1.end(); i++)
	{
		cout << " " << *i;
	}
	cout << endl;

	cout << s2.size();
	for (i=s2.begin(); i!=s2.end(); i++)
	{
		cout << " " << *i;
	}
	cout << endl;
	
	cout << s3.size();
	for (i=s3.begin(); i!=s3.end(); i++)
	{
		cout << " " << *i;
	}
	cout << endl;
	
	return 0;
}
