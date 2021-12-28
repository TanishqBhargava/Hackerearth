/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long arr[105], dp[105][100005];

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t; 
	cin >> t;
	while(t--)
	{
		long long n, x, sum = 0; 
		cin >> n >> x;
		for(int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		for(int i = 0; i <= n; i++)
			dp[0][i] = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 0; j <= x; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if(j - arr[i] >= 0)
					dp[i][j] = max(dp[i][j], dp[i - 1][j - arr[i]] + arr[i]);
			}
		}
		if(sum - dp[n][x] <= x)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
}
