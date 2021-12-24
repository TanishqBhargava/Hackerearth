/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	long long int t, dp[1000001];
	cin >> t;
	dp[0] = 1;
	dp[1] = 1;
	for(long long int i = 2; i <= 1000000; i++)
	{
		dp[i] = dp[i - 1] + (i - 1) * dp[i - 2];
		dp[i] %= 1000000007;
	}
	while(t--)
	{
		long long int n;
		cin >> n;
		cout << dp[n] << endl;
	}
}
