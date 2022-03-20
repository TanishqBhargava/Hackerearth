/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[500005], vis(500005), inn(500005), out(500005), par(500005);
 
void dfs1 (int i, int comp_no) 
{
	par[i] = comp_no;
	vis[i] = 1;
	for(int nxt: adj[i]) 
    {
		if(vis[nxt]) 
			continue;
		dfs1(nxt, comp_no);
		inn[i] = max(inn[i], inn[nxt]);
	}
	inn[i]++;
}
 
void dfs2 (int i, int p = -1) 
{
	int a = 0, b = 0;
	for(int nxt: adj[i]) 
    {
		if(nxt == p) 
			continue;
		if(inn[nxt] > a)
			b = a, a = inn[nxt];
		else if(inn[nxt] > b) 
			b = inn[nxt];
	}
	for(int nxt: adj[i]) 
    {
		if(nxt == p) 
			continue;
		int use = (a == inn[nxt]) ? b : a;
		out[nxt] = max(out[i], use + 1) + 1;
		dfs2(nxt, i);
	}
}
  
int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t, n, m, u, v;
	cin >> t;
	while(t--) 
	{
        cin >> n >> m;
        for(int i = 0; i < m; i++) 
        {
            cin >> u >> v;
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int comp_no = 0;
        for(int i = 0; i < n; i++) 
        {
            if(vis[i]) 
                continue;
            dfs1(i, comp_no);
            dfs2(i);
            comp_no++;
        }
        vector<int> arr(500005), comp_mn(comp_no, INT_MAX);
        for(int i = 0; i < n; i++) 
        {
            int p = par[i];
            arr[i] = max(inn[i], out[i]);
            comp_mn[p] = min(comp_mn[p], arr[i]);
        }
        int mx_lvl = 0;
        for(int i = 0; i < comp_no; i++) 
            mx_lvl = max(mx_lvl, comp_mn[i]);
        vector<int> cnt(comp_no);
        for(int i = 0; i < n; i++) 
        {
            int p = par[i];
            if (arr[i] <= mx_lvl) 
                cnt[p]++;
        }
        long long res = 1;
        for(int x: cnt) 
            res = (1LL * x * res) % 1000000007;
        cout << res << endl;
        for(int i = 0; i < n; i++)
        {
            adj[i].clear();
            vis[i] = inn[i] = out[i] = 0;
        }
    }
	return 0;
}
