/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
vector<int>adjacent[100005];
long long int val[100005], f[100005], dp[100005][2];
bool visited[100005];
 
long long int fillf(int u)
{
    visited[u] = true;  
    f[u] = val[u];
    for(int i = 0 ; i < adjacent[u].size() ; i++)
    {
        int v = adjacent[u][i];
        if(!visited[v])
        {
            long long int mx = fillf(v);
            f[u] = max(f[u], mx);
        }
    }
    return f[u];
}
 
void dfs(int u)
{
    visited[u] = true;  
    dp[u][0] = 0;
    dp[u][1] = f[u];
    for(int i = 0 ; i < adjacent[u].size() ; i++)
    {
        int v = adjacent[u][i];
        if(!visited[v])
        {
            dfs(v);
            dp[u][1] += dp[v][0];
            dp[u][0] += max(dp[v][1], dp[v][0]);
        }
    }
}
 
void solve()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        adjacent[i].clear();
    for(int i = 1 ; i <= n - 1 ; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacent[u].push_back(v);
        adjacent[v].push_back(u);
    }
    for(int i = 1 ; i <= n ; i++)
        cin >> val[i];
     for(int i = 1 ; i <= n ; i++)
        visited[i] = false;
    f[1] = fillf(1);
    for(int i = 1 ; i <= n ; i++)
        visited[i] = false;
    dfs(1);
    long long int ans = 0;
    for(int i = 1 ; i <= n ; i++)
        ans = max(ans,max(dp[i][0], dp[i][1]));
    cout << ans << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
    cin >> t;
    while(t--)
        solve();
}
