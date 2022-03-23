/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, m, bin;
long long sum, adj[402][402], cost, flow, currflow, parent[402], visited[402];
 
bool bfs()
{
    queue<int>q;
    q.push(0);
    while(!q.empty())
    {
        int cnt = q.size();
        while(cnt--)
        {
            int tmp = q.front();
            q.pop();
            for(int i = 0; i <= n + m + 1; i++)
            {
                if(adj[tmp][i] > 0 && !visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                    parent[i] = tmp;
                    if(i == n + m + 1)
                        return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> cost;
        sum += cost;
        adj[0][i] = cost;
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> cost;
        adj[n + i][n + m + 1] = cost;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> bin;
            if(bin)
                adj[i][n + j] = 10000000000;
        }
    }
    for(int i = 0; i <= 401; i++)
    {
        parent[i] = -1;
        visited[i] = 0;
    }
    while(bfs())
    {
        currflow = 1e10;
        int t = n + m + 1;
        while(t != 0)
        {
            currflow = min(currflow, adj[parent[t]][t]);
            t = parent[t];
        }
        flow += currflow;
        t = n + m + 1;
        while(t != 0)
        {
            adj[parent[t]][t] -= currflow;
            adj[t][parent[t]] += currflow;
            t = parent[t];
        }
        for(int i = 0; i <= 402; i++)
        {
            parent[i] = -1;
            visited[i] = 0;
        }
    }
    cout << sum - flow;
    return 0;
}
