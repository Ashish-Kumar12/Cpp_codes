#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
 
 
int main() 
{
    fast
    
    int n,m;
    cin>>n>>m;
    
    set<char>s1,s2;
    
    char c;
    
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>c;
            if(c=='S')
            {
                s1.insert(i);
                s2.insert(j);
            }
        }
    }
    
    cout<<m*n-s1.size()*s2.size();
    
}
