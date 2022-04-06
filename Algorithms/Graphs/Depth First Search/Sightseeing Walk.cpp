/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
vector <int> G[100005];
bool vis[100005];
int ans, ht[100005];

void dfs(int pos, int start)
{
    vis[pos] = true;
    ans = max(ans, ht[pos] - ht[start]);
    for (int i = 0; i < G[pos].size(); ++i)
    {
        if(!vis[G[pos][i]])
            dfs(G[pos][i],start);
    } 
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> A;
        for(int i = 1; i <= n; ++i)
        {
            cin >> ht[i];
            A.push_back(make_pair(ht[i], i));
        }
        for(int i = 0; i < m; ++i)
        {
            int a, b;
            cin >> a >> b;
            G[a].push_back(b);
        }
        sort(A.begin(), A.end());
        ans = 0;
        for(int i = 0; i < A.size(); ++i)
        {
            int pos = A[i].second;
            if(!vis[pos])
                dfs(pos, pos);
        }
        cout << ans << endl;
        memset(vis, false, sizeof vis);
        for(int i = 1; i <= n; ++i)
            G[i].clear();
    }
    return 0;
}
