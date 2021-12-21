/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, dp[100014];
long long k;
string s;

void solve()
{
    memset(dp, 0, sizeof dp);
    cin >> n >> k;
    cin >> s;
    dp[n] = 1;
    for(int i = n - 1; i >= 0; i--)
        for(int j = 1; i + j <= n; j++)
		{
            if(stoull(s.substr(i, j)) >= k)
                break;
            dp[i] = (dp[i] + dp[i + j]) % 1000000007;
        }
    cout << dp[0] << endl;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}
