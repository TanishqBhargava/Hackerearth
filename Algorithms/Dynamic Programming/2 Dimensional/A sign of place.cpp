/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long int dp[5001][5001];
 
int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    memset(dp, 0, sizeof dp);
    for (int j = 1; j < n + 1; j++) 
        dp[1][j] = 1;
    for (int i = 2; i < n + 1; i++) 
    {
        if (s[i - 2] == '<') 
        {
            for (int j = 1; j < n + 1; j++) 
                dp[i][j] = (dp[i][j - 1] + dp[i - 1][j - 1]) % 1000000007;
        }
        else if (s[i - 2] == '>') 
        {
            for (int j = n; j; j--) 
                dp[i][j] = (dp[i][j + 1] + dp[i - 1][j + 1]) % 1000000007;
        }
        else 
        {
            for (int j = 1; j < n + 1; j++) 
                dp[i][j] = dp[i - 1][j];
        }
    }
    long long int ans = 0;
    for (int j = 1; j < n + 1; j++) 
        ans += dp[n][j];
    cout << ans % 1000000007;
}
