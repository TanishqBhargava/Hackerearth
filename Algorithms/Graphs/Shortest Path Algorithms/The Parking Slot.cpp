/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
void Initialize(vector<vector<pair<long int, long int>>>& adj, int M)
{
    for(int i = 0; i < M; i++)
    {
        int u, v;
        long int w;
        cin >> u >> v >> w;
        u--; v--;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }
}
 
void MinimumCost(vector<vector<pair<long int, long int>>>& adj, int N, int K, int F, int Capacity[])
{
    priority_queue<pair<long int, long int>, vector<pair<long int, long int>>, greater<pair<long int, long int>>>pq;
    bool Finalized[N]{};
    pq.push({0, 0});
    long long int cost[N];
    fill(cost, cost + N, 0);
    while(!pq.empty())
    {
        pair<long int, long int> curr = pq.top();
        pq.pop();
        if(Finalized[curr.second]) 
			continue;
        Finalized[curr.second] = true;
        cost[curr.second] = curr.first;
        for(int i = 0; i < Capacity[curr.second] && K > 0; i++)
        {
            cout << cost[curr.second] + F << " ";
            K--;
        }
        if(K == 0) 
			break;
        for(auto it: adj[curr.second])
        {
            if(Finalized[it.second]) 
				continue;
            pq.push({cost[curr.second] + it.first, it.second});
        }
    }
    while(K--)
        cout << -1 << " ";  
    cout << endl;
}
 
int main()
{
 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	int N, M, F;
 	cin >> N >> M >> F;
 	int Capacity[N];
 	for(int i = 0; i < N; i++) 
	 	cin >> Capacity[i];
 	vector<vector<pair<long int, long int>>> adj(N);
 	Initialize(adj, M);
 	int K; 
	cin >> K;
 	MinimumCost(adj, N, K, F, Capacity);
}
