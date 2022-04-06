/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int disc[100005], low[100005], sz[100005], CC[100005], Number[100005], tme = 0, ans = 0, p, cc = 0;
bool vis[100005];
vector<int> adj[100005];

void DDFFSS(int s) 
{
    vis[s] = true;
    CC[s] = cc;
    Number[cc]++;
    for(int i = 0; i < (int)adj[s].size(); i++) 
        if(!vis[adj[s][i]]) 
            DDFFSS(adj[s][i]);
}

void DFS(int s, int par = -1) 
{
    sz[s] = 1;
    ++tme;
    low[s] = disc[s] = tme;
    vis[s] = true;
    for(int i = 0; i < (int)adj[s].size(); i++) 
    {
        int to = adj[s][i];
        if(to == par) 
            continue;
        if(!vis[to]) 
        {
            DFS(to, s);
            low[s] = min(low[s], low[to]);
            sz[s] += sz[to];
            if(low[to] > disc[s] and abs(sz[to] - (Number[CC[s]] - sz[to])) < p) 
                ans++;
        }
        else 
            low[s] = min(low[s], disc[to]);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int m, n;
    cin >> n >> m >> p;
    for(int i = 1; i <= m; i++) 
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; i++) 
        if(!vis[i]) 
        {
            ++cc;
            DDFFSS(i);
        }
    memset(vis, false, sizeof(vis));
    for(int i = 1; i <= n; i++) 
        if(!vis[i]) 
            DFS(i);
    cout << ans << endl;
    return 0;
}
