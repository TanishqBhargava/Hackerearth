/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
long long dfs(const int x, const int f, const vector<vector<int>> &e, const vector<int> &a, vector<int> &low, vector<int> &dfn, long long total, vector<long long> &r) 
{
    static int T = 0;
    low[x] = dfn[x] = T++;
	long long v = a[x];
    for(int y : e[x]) 
	{
        if(y != f) 
		{
            if(dfn[y] < 0) 
			{
                const long long temp = dfs(y, x, e, a, low, dfn, total, r);
				v += temp;
                low[x] = min(low[x], low[y]);
                if(low[y] > dfn[x]) 
				{
					vector<long long> may = {(temp - total) * temp, min(x, y), max(x, y)};
					r = min(r, may);
                }
            } 
			else 
			    low[x] = min(low[x], dfn[y]);
        }
    }
	return v;
}
 
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	long long total = 0;
	for(int i = 0; i < n; ++i) 
	{
		cin >> a[i];
		total += a[i];
	}
	vector<vector<int>> con(n);
	map<pair<int, int>, int> have;
	for(; m; --m) 
	{
		int x, y;
		cin >> x >> y;
		--x;
		--y;
		if(x != y) 
		{
            con[x].push_back(y);
            con[y].push_back(x);
        }
	}
	vector<long long> r = {0, n, n};
	vector<int> dfn(n, -1), low(n);
	dfs(0, -1, con, a, low, dfn, total, r);
	cout << r[1] + 1 << " " << r[2] + 1 << endl;
}
