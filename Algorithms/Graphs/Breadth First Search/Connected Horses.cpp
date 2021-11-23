/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int u[]={-2,-1,1,2,2,1,-1,-2}, v[]={1,2,2,1,-1,-2,-2,-1}, temp, mod = 1000000007;
 
bool isvalid(int x, int y, int n, int m)
{
	if(x >= 1 && y >= 1 && x < n && y < m)
	    return true;
	else
	    return false;
}
 
long long dfs(vector<vector<int>> &board, int x, int y)
{
	board[x][y] = 0;
	int n = board.size(), m = board[0].size();
	long long c = 1;
	for(int i = 0; i < 8; i++)
	{
		int a = x + u[i], b = y + v[i];
		if(isvalid(a, b, n, m) && board[a][b] == 1)
			c += dfs(board, a, b);
	}
	return c;
}
 
int factorial[1000003];
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    factorial[0] = 1;
    for(long long i = 1; i <= 1e6; i++)
        factorial[i] = (factorial[i - 1] * i) % mod;
	int t, n, m, e;
	cin >> t;
	while((t--)>0)
	{
		cin >> n >> m >> e;
		vector<vector<int>> board(n + 1,vector<int> (m + 1, 0));
		for(int i = 0; i < e; i++)
		{
			int x, y;
			cin >> x >> y;
			board[x][y] = 1;
		}
		long long c = 1;
		for(int i = 1; i <= n; i++)
        {
			for(int j = 1; j <= m; j++)
		    {
			    if(board[i][j] == 1)
			    {
		    		long long a = dfs(board, i, j);
    				c = (c * factorial[a]) % mod;
	    		}
		    }
		}
		cout << c << endl;
	}										 
}
