/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
vector<int>v[105];
bool vis[105], art[105];
int num[105], parent[105], low[105];
stack<int>st;

void dfs(int u)
{
	static int time = 1;
	int children = 0;
	vis[u] = 1;
	num[u] = low[u] = time++;
	for(int i = 0; i < v[u].size(); i++)
	{
		int curr = v[u][i];
		if(!vis[curr])
		{
			children++;
			parent[curr] = u;
			dfs(curr);
			low[u] = min(low[u], low[curr]);
			if((!parent[u] && children > 1) || (parent[u] && low[curr] >= num[u]))
				art[u] = 1;
		}
		else if(curr != parent[u])
			low[u] = min(low[u], num[curr]);
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, q, i;
	cin >> n >> m;
	for(i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(i = 1; i <= n; i++)
		if(!vis[i])
			dfs(i);
	cin >> q;
	while(q--)
	{
		int x;
		cin >> x;
		if(art[x])
			cout << "Satisfied " << (int)v[x].size() << endl;
		else 
			cout << "Not Satisfied" << endl;
	}
	return 0;
}
