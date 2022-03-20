/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int w[1503];
map<int, int> ans;
vector<int> g[1503];
 
int dfs(const int u, const int par, const int root) 
{
  	int ret = 1;
  	for(auto const v : g[u])
	{ 
    	if(v != par && (w[v] > w[root] || (w[v] == w[root] && v < root))) 
      		ret = (1ll * ret * (dfs(v, u, root) + 1)) % 1000000007;
  	}
  	return ret;
}
 
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  	int n, q;
  	cin >> n;
  	for(int i = 0; i < n; i++) 
    	cin >> w[i];
  	for(int i = 0; i < n - 1; i++) 
	{
    	int u, v;
    	cin >> u >> v;
    	u--, v--;
    	g[u].push_back(v);
    	g[v].push_back(u);
  	}
   	for (int i = 0; i < n; i++) 
	{
    	const int t = dfs(i, -1, i);
    	ans[w[i]] += t;
    	if(ans[w[i]] >= 1000000007) 
      		ans[w[i]] -= 1000000007;
  	}
  	cin >> q;
  	while(q--) 
	{
    	int k;
    	cin >> k;
    	printf("%d\n", (ans.count(k)) ? ans[k] : 0);
  	}
   	return 0;
}
