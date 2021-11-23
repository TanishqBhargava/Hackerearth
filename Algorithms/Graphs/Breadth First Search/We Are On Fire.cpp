/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, m, dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
 
bool isvalid(int x, int y)
{
	return x >= 0 && y >= 0 && x < n && y < m;
}
 
void dfs(vector<vector<bool>> &adj, int &no, int x, int y)
{
    no++;
	adj[x][y] = 0;
    for(int j = 0; j < 4; j++)
    {
		int X = x + dx[j], Y = y + dy[j];
        if(isvalid(X, Y) && adj[X][Y] == 1)
            dfs(adj, no, X, Y);
    }
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int q, ans = 0;
	cin >> n >> m >> q;
	vector<vector<bool>> adj(n, vector<bool>(m, false));
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
		    int x;
			cin >> x;
            adj[i][j] = x;
			if(adj[i][j] == 1)
				ans++;
		}
	}
	while(q--)
	{
		int i, j, no = 0;
		cin >> i >> j;
		if(adj[i - 1][j - 1] == 1)
			dfs(adj, no, i - 1, j - 1);
		ans -= no;
		cout << ans << "\n";
	}
	return 0;
}
