/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
bool find_hamiltonian_paths(int adj[][10],int n)
{
	bool dp[10][1<<10] = {0};
	int i, j, k;
	for(i = 0; i < n; i++)
		dp[i][1<<i] = 1;
	int limit = 1<<n;
	for(i = 0; i < limit; i++)
		for(j = 0; j < n; j++)
			if(i & (1<<j))
				for(k = 0; k < n; k++)
					if(k != j && (i & (1<<k)) && adj[j][k] && dp[k][i^(1<<j)])
					{
						dp[j][i] = 1;
						break;
					}
	for(i = 0; i < n; i++)
		if(dp[i][limit - 1])
			return 1;
	return 0;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, i, adj[10][10] = {0};
		cin >> n >> m;
		for(i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			adj[x - 1][y - 1] = adj[y - 1][x - 1] = 1;
		}
		find_hamiltonian_paths(adj,n) ? printf("Yes\n") : printf("No\n");
	}
	return 0;
}
