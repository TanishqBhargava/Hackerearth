/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int>adj[n + 1], indegree(n + 1, 0);
    for(int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        indegree[u]++, indegree[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>busterminus(n + 1, 0);
    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        busterminus[x] = 1;
    }
    queue<int>q;
    for(int i = 1; i <= n; i++)
    {
        if(busterminus[i] == 0 && indegree[i] == 1)
        q.push(i);
    }
    int cnt = 0;
    while(!q.empty())
    {
        int p = q.front();
        cnt++;
        q.pop();
        for(int i = 0; i < adj[p].size(); i++)
        {
            indegree[adj[p][i]]--;
            if(indegree[adj[p][i]] == 1 && busterminus[adj[p][i]] == 0)
                q.push(adj[p][i]);
        }
    }
    cout << n - cnt;
}
