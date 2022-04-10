/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k, dp[10014][114];
    string s;
    cin >> n >> k >> s;
    dp[0][0] = 1;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j <= k; ++j) 
		{
            dp[i + 1][j] = dp[i][j];
            if(j)
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j - 1] * (long long)(1 + (s[i] != '0' && s[i] != '9'))) % 1000000007;
        }
    cout << accumulate(dp[n] + 1, dp[n] + k + 1, 0ll) % 1000000007 << endl;
}
