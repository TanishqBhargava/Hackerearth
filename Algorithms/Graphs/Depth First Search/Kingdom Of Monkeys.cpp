/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
long long A[100005];
bool visited[100005];
 
long long dfs(int u)
{
    visited[u] = true;
    long long ans = A[u]; 
    for(int v:adj[u])
	{
        if(!visited[v])
            ans += dfs(v);
    }
    return ans;
}
  
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n, m; 
    cin >> t; 
    while(t--)
	{
        cin >> n >> m; 
        for(int i = 0; i < n; i++)
			adj[i].clear();
        for(int i = 0; i < m; i++)
		{
            int a, b; 
			cin >> a >> b; 
			a--, b--;
            adj[a].push_back(b); 
            adj[b].push_back(a); 
        }
        for(int i = 0; i < n; i++)
            cin >> A[i];
        for(int i = 0; i < n; i++)
            visited[i] = false;
        long long ans = 0; 
        for(int i = 0; i < n; i++)
		{
            if(!visited[i])
			{
                long long temp = dfs(i); 
                ans = max(ans, temp);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
