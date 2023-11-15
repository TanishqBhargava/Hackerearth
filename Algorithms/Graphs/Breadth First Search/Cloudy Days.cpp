/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& arr, vector<bool>& vis, int cur, int k)
{
	if(vis[cur] || k == 0)
		return;
	vis[cur] = true;
	for(auto v: arr[cur])
		dfs(arr, vis, v, k - 1);
}

int main() 
{
	int n, m, k, c, ans = 0;
	cin >> n >> m >> k >> c;
	vector<vector<int>> arr(n + 1);
	vector<bool> vis(n + 1, false);
	for(int i = 0; i < m; i++)
    {
		int t1, t2;
		cin >> t1 >> t2;
		arr[t1].push_back(t2);
		arr[t2].push_back(t1);
	}
	dfs(arr, vis, c, k + 1);
	for(int i = 1; i <= n; i++)
		if(vis[i])
			ans++;
	cout << ans << endl;
	return 0;
}
