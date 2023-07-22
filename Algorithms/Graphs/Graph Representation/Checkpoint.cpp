/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long int n, m, p;
vector<vector<long long int>> graph;
vector<long long int> leftSide(200005, 0), rightSide(200005, 0), dist(200005, 0);
 
bool canReduce()
{
    queue<long long int> q;
    for(long long int i = 1; i <= n; i++)
    {
        if(leftSide[i] == 0)
        {
            dist[i] = 0;
            q.push(i);
        }
        else
            dist[i] = 1000000000000; 
    }
    dist[0] = 1000000000000; 
    while(!q.empty())
    {
        auto fr = q.front();
        q.pop();
        if(dist[fr] < dist[0])
        {
            for(auto &edge : graph[fr])
            {
                if(dist[rightSide[edge]] == 1000000000000) 
                {
                    dist[rightSide[edge]] = dist[fr] + 1;
                    q.push(rightSide[edge]);
                }
            }
        }
    }
    if(dist[0] != 1000000000000) 
        return true;
    return false;
}
 
bool dfs(int src)
{
    if(src == 0)
        return true;
    for(auto &edge : graph[src])
    {
        if(dist[rightSide[edge]] == dist[src] + 1)
        {
            if(dfs(rightSide[edge]))
            {
                rightSide[edge] = src;
                leftSide[src] = edge;
                return true;
            }
        }
    }
    dist[src] = 1000000000000; 
    return false;
}
    
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m >> p;
    graph.resize(n + 1);
    for(long long int i = 0; i < p; i++)
    {
        long long int x, y; 
        cin >> x >> y;
        graph[x].push_back(y);
    }
    long long int ans = 0;
    while(canReduce())
    {
        for(long long int i = 1; i <= n; i++)
        {
            if(leftSide[i] == 0 and dfs(i))
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
