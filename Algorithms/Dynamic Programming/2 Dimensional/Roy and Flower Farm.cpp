/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	int t;
   	cin >> t;
   	assert(t >= 1 && t <= 10);
   	while(t--)
   	{
   		int n, cost[101], weight[101], i, lim, j, dp[101][10001] = {0}, minspend = 0;
   		cin >> n >> lim;
   		assert(n >= 1 && n <= 100 && lim >= 1 && lim <= 10000);
   		for(i = 1; i <= n; i++)
   		{
   			cin >> cost[i] >> weight[i];
   			assert(cost[i] >= 1 && cost[i] <= 1000 && weight[i] >= 1 && weight[i] <= 1000);
   		}
   		for(i = 1; i <= n; i++)
   		{
   			for(j = 0; j <= lim; j++)
   			{
   				if(j - weight[i] >= 0)
   					dp[i][j] = ((dp[i - 1][j]) > (dp[i - 1][j - weight[i]] + cost[i]) ? (dp[i - 1][j]) : (dp[i - 1][j - weight[i]] + cost[i]));
   				else
   					dp[i][j] = dp[i - 1][j];
   			}
   		}
   		for(i = 0; i <= lim; i++)
   		{
   			if(dp[n][minspend] - minspend < dp[n][i] - i)
   				minspend = i;
   		}
   		cout << minspend << " " << dp[n][minspend] - minspend + lim << endl;
   	}
    return 0;
} 
