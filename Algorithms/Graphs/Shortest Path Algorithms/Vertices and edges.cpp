/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
const long long inf = 1e18;
vector<pair<int, int> > g[200014];
set<pair<long long, int> > pq;
bool need[200014];
int n, m;
long long d[2][200014];

void dij(int source, long long d[]) 
{
    fill(d, d + n, inf);
    d[source] = 0;
    pq.insert({0, source});
    while(pq.size()) 
	{
        int v = pq.begin()->second;
        pq.erase(pq.begin());
        for(auto e : g[v])
            if(d[e.first] > d[v] + e.second) 
			{
                pq.erase({d[e.first], e.first});
                pq.insert({d[e.first] = d[v] + e.second, e.first});
            }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false), cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < m; ++i) 
	{
        int v, u, w;
        cin >> v >> u >> w;
        v--, u--;
        g[v].emplace_back(u, w);
        g[u].emplace_back(v, w);
    }
    dij(0, d[0]);
    dij(n - 1, d[1]);
    pq.insert({0, 0});
    while(!pq.empty()) 
	{
        int v = pq.begin()->second;
        pq.erase(pq.begin());
        need[v] = pq.empty();
        for(auto e : g[v])
            if(d[0][v] + e.second + d[1][e.first] == d[0][n - 1]) 
                pq.insert({d[0][e.first], e.first});
    }
    for(int i = 0; i < n; ++i) 
        cout << (need[i] ? "all" : d[0][i] + d[1][i] == d[0][n - 1] ? "some" : "none") << endl;
}
