/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long int dp[1000001];
vector<pair<int, int>> g[1000001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, indeg[1000001];
    long long int ans = 0;
    cin >> n >> m;
    assert(n < 1000001 && m < 1000001);
    for(int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        assert(1 <= u && u <= n);
        assert(1 <= v && v <= n);
        assert(1 <= w && w <= 1000000001);
        g[v].push_back(make_pair(u, w));
        indeg[u]++;
    }
    queue<int> Q;
    for(int i = 1; i <= n; i++)
        if(!indeg[i])
        {
            Q.push(i);
            dp[i] = 0;
        }
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i = 0; i < (int)(g[u].size()); i++)
        {
            int w = g[u][i].first;
            dp[w] = max(dp[w], dp[u] + g[u][i].second + 2);
            indeg[w]--;
            if(!indeg[w])
                Q.push(w);
        }
    }
    for(int i = 1; i <= n; i++)
        ans = max(ans, dp[i]);
    cout << ans << endl; 
    return 0;
}
