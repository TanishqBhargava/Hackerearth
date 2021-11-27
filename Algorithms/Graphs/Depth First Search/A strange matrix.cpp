/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1}, n, m;
long long int c;

bool safe(int x, int y, long long int k, vector<vector<int>>&vis, vector<vector<long long int>>&a)
{
	if(x < 0 || y < 0 || x >= n || y >= m)
		return false;
	if(vis[x][y] == 1)
		return false;
	if(a[x][y] != a[0][0])
		return false;
	return true;
}

bool dfs(int x, int y, long long int k, vector<vector<int>>&vis, vector<vector<long long int>>&a)
{
	if(x == n - 1 && y == m - 1)
		return true;
	vis[x][y] = 1;
 	for(int i = 0; i < 4; i++)
	{
		if(safe(x + dx[i], y + dy[i], k, vis, a))
		{
			if(dfs(x + dx[i], y + dy[i], k, vis, a) == true)
				return true;
		}
	}
	return false;
}

bool valid(long long int k, vector<vector<int>>&vis, vector<vector<long long int>>&a)
{
	for(int i = 0; i < vis.size(); i++)
		for(int j = 0; j < vis[i].size(); j++)
			vis[i][j] = 0;
	vector<vector<long long int>>b(n,vector<long long int>(m,0));
	b = a;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
			b[i][j] = min(b[i][j] + k, c);
	}
	if(dfs(0, 0, k, vis, b))
		return true;
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m >> c;
	vector<vector<int>>vis(n, vector<int>(m, 0));
	vector<vector<long long int>>a(n, vector<long long int>(m, 0));
	long long int MIN = 100000000000;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			MIN = min(MIN, a[i][j]);
		}
		long long int l = 0, r = c, mid, ans = 0;
		while(l <= r)
		{
			mid = (l + r) / 2;
			if(valid(mid, vis, a))
			{
				ans = mid;
				r = mid - 1;
			}
			else
				l = mid + 1;
		}
		cout << ans;
}
