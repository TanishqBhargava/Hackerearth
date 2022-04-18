/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, m, cvertex, p[100010];
vector<int> g[100010];
bool cycle, mark[100010], black[100010];
vector<pair<int, int>> ans;

void dfs(int v)
{ 
    mark[v] = 1;
    black[v] = 1;
    for(auto u : g[v])
	{
        if(!mark[u])
		{
            p[u] = v;
            dfs(u);
        }
        if(black[u])
		{ 
            int k = v;
            while(k != u)
			{
                ans.push_back(make_pair(p[k], k));
                k = p[k];
            }
            ans.push_back(make_pair(v, u));
            cout << ans.size() << endl;
            for(int i = 0; i < ans.size(); i++)
                cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
            exit(0);
        }
    }
    black[v] = 0;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < m; i++)
	{
        int x, y;
        cin >> x >> y, x--, y--;
		g[x].push_back(y);
    }
    fill(p, p + 100010, -1);
    for(int i = 0; i < n; i++)
	{
        if(!mark[i])
            dfs(i);
    }
    cout << -1 << endl;
    return 0;
}
