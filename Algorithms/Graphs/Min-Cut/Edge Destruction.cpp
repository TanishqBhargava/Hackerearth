/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;  
int n, m, ds[1010][1010], cs[1010][1010], f[2][1010], vis[1010];
 
struct DinicFlow 
{
    int n;
    vector <vector <int>> g;
    vector <int> ptr, dist;
    struct Edge 
    {
        int from, to, cap, flow;
        Edge(int _from, int _to, int _cap, int _flow) :
        from(_from), to(_to), cap(_cap), flow(_flow) { }
    };vector<Edge> edges;
    void init(int _n) 
    {
        n = _n;
        edges.clear();
        g.clear();
        ptr.clear();
        dist.clear();
        g.resize(n);
        dist.resize(n);
        ptr.resize(n);
    }
    void addEdge(int u, int v, int c) 
    {
        g[u].push_back(edges.size());
        edges.push_back(Edge(u, v, c, 0));
        g[v].push_back(edges.size());
        edges.push_back(Edge(v, u, c, c));
    }
    bool bfs(int s, int t) 
    {
        for(int i = 0; i < n; ++i) 
        {
            ptr[i] = 0;
            dist[i] = 1000000005;
        }
        queue < int > q;
        q.push(s);
        dist[s] = 0;
        while(!q.empty()) 
        {
            int v = q.front();
            q.pop();
            for(auto id : g[v]) 
            {
                Edge &cur = edges[id];
                if(cur.flow < cur.cap && dist[cur.to] == 1000000005) 
                {
                    dist[cur.to] = dist[cur.from] + 1;
                    q.push(cur.to);
                }
            }
        }
        return dist[t] != 1000000005;
    }
    int dfs(int v, int t, int flow) 
    {
        if(v == t) 
            return flow;
        for(int &i = ptr[v]; i < (int)g[v].size(); ++i) 
        {
            Edge &cur = edges[g[v][i]];
            if(cur.flow < cur.cap && dist[cur.to] == dist[cur.from] + 1) 
            {
                int pushed = dfs(cur.to, t, min(flow, cur.cap - cur.flow));
                if(pushed > 0) 
                {
                    edges[g[v][i]].flow += pushed;
                    edges[g[v][i] ^ 1].flow -= pushed;
                    return pushed;
                }
            }
        }
        return 0;
    }
    int getFlow(int s, int t) 
    {
        int res = 0;
        while(bfs(s, t)) 
        {
            while(true) 
            {
                int x = dfs(s, t, 1000000005);
                if(x == 0) 
                    break;
                res += x;
            }
        }
        return res;
    }
};
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= m; ++i) 
    {
        int x, y, d, c;
        cin >> x >> y >> d >> c;
        if(ds[x][y] == 0 || ds[x][y] > d) 
        {
            ds[x][y] = ds[y][x] = d;
            cs[x][y] = 0;
        }
        if(ds[x][y] == d) 
        {
            cs[x][y] += c;
            cs[y][x] += c;
        }
    }
    for(int i = 0; i < 2; ++i) 
    {
        for(int j = 1; j <= n; ++j) 
            f[i][j] = 1000000005;
    }
    f[0][1] = f[1][n] = 0;
    memset(vis, 0, sizeof(vis));
    for(int i = 1; i <= n; ++i) 
    {
        int x = -1;
        for(int j = 1; j <= n; ++j) 
        {
            if(!vis[j] && (x == -1 || f[0][j] < f[0][x])) 
                x = j;
        }
        if(x == -1 || f[0][x] == 1000000005) 
            break;
        vis[x] = 1;
        for(int j = 1; j <= n; ++j) 
        {
            if(!vis[j] && ds[x][j] && f[0][j] > f[0][x] + ds[x][j]) 
                f[0][j] = f[0][x] + ds[x][j];
        }
    }
    memset(vis, 0, sizeof(vis));
    for(int i = 1; i <= n; ++i) 
    {
        int x = -1;
        for(int j = 1; j <= n; ++j) 
        {
            if(!vis[j] && (x == -1 || f[1][j] < f[1][x])) 
                x = j;
        }
        if(x == -1 || f[1][x] == 1000000005) 
            break;
        vis[x] = 1;
        for(int j = 1; j <= n; ++j) 
        {
            if(!vis[j] && ds[x][j] && f[1][j] > f[1][x] + ds[x][j]) 
                f[1][j] = f[1][x] + ds[x][j];
        }
    }
    if(f[0][n] == 1000000005) 
    {
        cout << 0 << endl;
        exit(0);
    }
    DinicFlow fl;
    fl.init(n + 2);
    for(int u = 1; u <= n; ++u) 
    {
        for(int v = 1; v <= n; ++v) 
        {
            if(ds[u][v] && 0LL + f[0][u] + ds[u][v] + f[1][v] == f[0][n]) 
                fl.addEdge(u, v, cs[u][v]);
        }
    }
    cout << fl.getFlow(1, n) << endl;
    return 0;
}
