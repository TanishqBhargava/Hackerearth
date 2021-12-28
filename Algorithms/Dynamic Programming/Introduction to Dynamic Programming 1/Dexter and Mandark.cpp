/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long dp[1001][1001];

long long ans(int n, int m, int i = 0, int j = 0)
{
  	if(j * m > i)
    	return 0;
  	if(n == i + j)
    	return i > j;
  	if(dp[i][j] != -1)
    	return dp[i][j];
  	return dp[i][j] = (ans(n, m, i + 1, j) % 1000000007 + ans(n, m, i, j + 1) % 1000000007) % 1000000007;
}

int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	int t;
  	cin >> t;
  	while(t--)
	{
    	int n, m;
    	cin >> n >> m;
    	memset(dp, -1, sizeof(dp));
    	cout << ans(n, m) << endl;
  	}
}
