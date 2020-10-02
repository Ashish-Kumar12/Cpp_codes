#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
 
 
int main() 
{
    fast
    int n,counter=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[1]=='+')
        counter++;
        else
        counter--;
    }
    cout<<counter;
}
