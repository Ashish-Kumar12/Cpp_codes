
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]!=' ')
        {
            int s =s1.find(s2[i]);
            if(s==-1)
            {
                cout<<"NO";
                return 0;
            }
            else
            s1.erase(s1.begin()+s);
        }
    }
    cout<<"YES";
    
       return 0;
 
}
