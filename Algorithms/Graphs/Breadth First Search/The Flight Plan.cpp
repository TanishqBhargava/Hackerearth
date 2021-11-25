/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, t, c;
    cin >> n >> m >> t >> c;
    vector<int>g[n + 1];
    bool vis[n + 1];
     memset(vis, false, sizeof(vis));
    int parent[n + 1], u, v;
    for(int i = 0; i < m; i++)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= n; i++)
        sort(g[i].begin(), g[i].end());
    queue<int>q;
    q.push(x);
    vis[x] = true;
    parent[x] = -1;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        if(p == y)
            break;
        for(auto ch : g[p])
        {
            if(!vis[ch])
            {
                vis[ch] = true;
                parent[ch] = p;
                q.push(ch);
            }
        } 
    }
    vector<int>path;
    for(int v = y; v != -1; v = parent[v])
        path.push_back(v);
    reverse(path.begin(), path.end());
    cout << path.size() << endl;
    for(auto a : path)
        cout << a << " ";    
}
