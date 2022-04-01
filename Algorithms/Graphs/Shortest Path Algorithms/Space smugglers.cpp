/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
long long shortestPath(long long sr, vector<long long> &dis, vector<pair<long long, long long>> *edges) 
{
	priority_queue <pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>>pq;
	pq.push({0, sr});
	dis[sr] = 0;
	while(!pq.empty()) 
    {
		long long u = pq.top().second;
		pq.pop();
		for(auto it : edges[u]) 
        {
			long long v = it.first, wt = it.second;
			if(dis[v] >= dis[u] + wt) 
            {
                dis[v] = dis[u] + wt;
                pq.push({dis[v], v});
            }
		}
	}
	return 0;
}
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long n, m, s, t, ans = INT_MAX;
	cin >> n >> m >> s >> t;	
	vector<pair<long long, long long>> edges[n + 1], edges1[n + 1];
	for(long long i = 0; i < m; i++) 
    {
		long long a, b, c;
		cin >> a >> b >> c;
		edges[a].push_back({b, c});
		edges1[b].push_back({a, c});
	}
	vector<long long> dis1(n + 1, 1000000007), dis2(n + 1, 1000000007), dis3(n + 1, 1000000007), dis4(n + 1, 1000000007);
    shortestPath(s, dis1, edges);
   	shortestPath(t, dis2, edges);
	shortestPath(s, dis3, edges1);
	shortestPath(t, dis4, edges1);
	for(long long i = 1; i <= n; i++) 
    {
		if(i != t && i != s) 
            ans = min(ans, dis1[i] + dis2[i] + dis3[i] + dis4[i]);
    }
    if(ans < 1000000007)
    	cout << ans;
    else
    	cout << -1;
}
