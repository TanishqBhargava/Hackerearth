/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int r, c;
	cin >> r >> c;
	int mat[r + 1][c + 1];
	long long dp[r + 1][c + 1] = {0};
	for(int i = 1; i <= r; i++)
	{
		long long temp = 0;
		for(int j = 1; j <= c; j++)
		{
			cin >> mat[i][j];
			temp += mat[i][j];
			dp[i][j] = temp;
		}
	}
	for(int i = 1; i <= r; i++)
	{
		for(int j = 1; j <= c; j++)
			dp[i][j] += dp[i - 1][j];
	}
	int q;
	cin >> q;
	while(q--)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1]  << endl;
	}
}
