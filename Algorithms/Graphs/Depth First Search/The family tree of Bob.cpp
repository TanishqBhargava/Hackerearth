/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int h[500014], par[19][500014];
vector<int> g[500014];

void dfs(int v = 0, int p = -1)
{
    for(int u : g[v])
        if(u != p)
        {
            par[0][u] = v;
            h[u] = h[v] + 1;
            dfs(u, v);
        }
}

int parat(int v, int h)
{
    for(int i = 0; i < 19; i++)
        if(h >> i & 1)
            v = par[i][v];
    return v;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, q, v = 0, p = -1;
	cin >> n >> q;
	for(int i = 0; i < n - 1; i++)
    {
		int v, u;
		cin >> v >> u;
		v--, u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	dfs();
	for(int k = 1; k < 19; k++)
		for(int i = 0; i < n; i++)
			par[k][i] = par[k - 1][par[k - 1][i]];
    while(q--)
    {
        int v, k;
        cin >> v >> k;
        v--;
        cout << (h[v] < k ? -1 : parat(v, k) + 1) << "\n";
	}
}
