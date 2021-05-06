#include<iostream>
#include<cstring>

using namespace std;

int fa[105], r[105];

void Init()
{
    for (int i = 0; i < 105; i++)
    	fa[i] = i;

    memset(r, 0, sizeof(r));
}

int Find(int x)
{
    return x == fa[x] ? x : fa[x] = Find(fa[x]);
}

void Unite(int a, int b)
{
    int r1 = Find(a);
    int r2 = Find(b);
    
    if (r1 == r2)
    	return;

    if (r[r1] < r[r2])
    	fa[r1] = r2;
    else 
    { 
        fa[r2] = r1;
        
        if (r[r1] == r[r2])
        	++r[r1];
    }
}

int main()
{
    int n, m, cnt = 0, res = 0;  
    
    cin >> n >> m;
    Init();
    
    for (int i = 0; i < n; i++)
    {
        int k, cur, next;
        cin >> k;
    
        if (k == 0)
        {
            ++res;
            continue;
        }
        
        cin >> cur;
        ++r[cur];
        
        for (int i = 1; i < k; i++)
        {
            cin >> next;
            ++r[next];
            
            Unite(cur, next);
        }
    }
    
    for (int i = 1; i <= m; i++)
    {
        if (r[i] == 0)
        	++cnt;
        	
        if (fa[i] == i)
        	++res;
    }
    
    if (cnt == m)
    	cout << n << endl;
    else 
    	cout << res - cnt - 1 << endl;

    return 0;
}
