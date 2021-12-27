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
	long long t; 
	cin >> t;
	while(t--)
	{
		long long n, k; 
		cin >> n >> k;
		long long dp[n + 1] = {0};
		dp[0] = 1;
		for(int i = 1; i <= n; i++)
		{
			for(int j = i - 1; (j >= 0) && (i - j <= k); j--)
				dp[i] = (dp[i] + dp[j]) % 1000000007;
		}
		cout << dp[n] << endl;
	}
	return 0;
}
