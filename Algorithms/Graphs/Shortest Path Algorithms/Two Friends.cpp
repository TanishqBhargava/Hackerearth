/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj, up;
vector<int> tin, tout, level;
int k, timer;
 
void init(int n) 
{
    k = __lg(n) + 1;
    timer = 0;
    level.assign(n + 1, 0);
    tin.assign(n + 1, 0);
    tout.assign(n + 1, 0);
    adj.assign(n + 1, {});
    up.assign(n + 1, vector<int> (k + 1));
}
 
bool is_ancestor(int u, int v) 
{
    return (tin[u] <= tin[v] && tout[u] >= tout[v]);
}
 
int lca(int u, int v) 
{
    if(is_ancestor(u, v)) 
		return u;
    if(is_ancestor(v, u)) 
		return v;
    for(int i = k; i >= 0; i--) 
	{
        if(!is_ancestor(up[u][i], v)) 
            u = up[u][i];
    }
    return up[u][0];
}
int distance(int u, int v) 
{
    int lc = lca(u, v);
    return level[u] + level[v] - 2 * level[lc];
}
 
void dfs(int node, int par) 
{
    up[node][0] = par;
    tin[node] = ++timer;
    level[node] = 1 + level[par];
    for(int i = 1; i <= k; i++) 
        up[node][i] = up[ up[node][i - 1]][i - 1];
    for(auto &it : adj[node]) 
	{
        if(it == par) 
			continue;
        dfs(it, node);
    }
    tout[node] = ++timer;
}
 
bool point_on_path(int u, int v, int p) 
{
    return (distance(u, v) == distance(u, p) + distance(p, v));
}
 
int helper(int u, int v, int p) 
{
    int res = 1000000000, lc = lca(u, v);
    res = min(res, distance(u, p));
    res = min(res, distance(v, p));
    int x = lca(u, p);
    if(x != u) 
	{
        if(point_on_path(u, v, x)) 
            res = min(res, distance(x, p));
        else 
            res = min(res, distance(p, lc));
    } 
    x = lca(v, p);
    if(x != v) 
	{
        if(point_on_path(u, v, x)) 
            res = min(res, distance(x, p));
        else 
            res = min(res, distance(p, lc));
    }
    return res;
}
 
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for(int _ = 0; _ < t; _++) 
	{
        int n, q; 
		cin >> n;
        init(n);
        for(int i = 2; i <= n; i++) 
		{
            int u, v; 
			cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, 1);
		cin >> q;
        while(q--) 
		{
            int u, v, u2, v2; 
			cin >> u >> v >> u2 >> v2;
            int lc1 = lca(u, v), lc2 = lca(u2, v2);
            if(level[lc1] < level[lc2]) 
                cout << helper(u, v, lc2) << "\n";
            else 
                cout << helper(u2, v2, lc1) << "\n";
        }
    }
    return 0;
}
