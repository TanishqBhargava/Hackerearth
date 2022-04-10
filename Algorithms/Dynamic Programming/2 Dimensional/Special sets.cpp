/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long n, m, k, a[200005], dp[2005][2005];

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        dp[1][i] = 1;
        dp[1][i] += dp[1][i - 1];
    }
    for(int i = 2; i <= n; i++)
    {
        for(int j = 2; j <= n; j++) 
			dp[i][j] = dp[i - 1][j - 2];
        for(int j = 1; j <= n; j++) 
			dp[i][j] = (dp[i][j] + dp[i][j - 1]) % 1000000007;
    }
    long long k = 1, ans = 0;
    for(int i = 1; i <= n; i++)
    {
        k = (1ll * k * i) % 1000000007;
        ans = (ans + k * dp[i][n]) % 1000000007;
    }
    cout << ans;
}
