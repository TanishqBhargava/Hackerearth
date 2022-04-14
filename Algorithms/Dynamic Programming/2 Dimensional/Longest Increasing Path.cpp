/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	int t;
  	cin >> t;
  	while(t--)
	{
    	int n, m;
    	cin >> n >> m;
    	int v[n][m], dp[n][m];
    	for(int h = 0; h < n; h++)
		{
      		for(int j = 0; j < m; j++)
			{
        		cin >> v[h][j];
        		dp[h][j] = 1;
      		}
    	}
    	for(int h = n - 1; h >= 0; h--)
		{
      		for(int j = m - 1; j >= 0; j--)
			{
        		if(h + 1 < n and v[h + 1][j] > v[h][j])
          			dp[h][j] = max(dp[h][j], 1 + dp[h + 1][j]);
        		if(j + 1 < m and v[h][j + 1] > v[h][j])
          			dp[h][j] = max(dp[h][j], 1 + dp[h][j + 1]);
      		}
    	}
    	cout << dp[0][0] << endl;
  	}
}
