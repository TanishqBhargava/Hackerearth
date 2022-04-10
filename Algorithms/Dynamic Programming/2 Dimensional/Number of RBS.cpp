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
    int t, n, dp[1014][1014];
    cin >> t;
    while(t--) 
    {
        cin >> n;
        memset(dp, 0, sizeof dp);
        dp[0][0] = 1;
        for(int i = 0; i < n; ++i) 
        {
            char c;
            cin >> c;
            if(c == '?' || c == '(')
                for(int j = 0; j < n; ++j)
                    dp[i + 1][j + 1] = dp[i][j];
            if(c == '?' || c == ')')
                for(int j = 1; j < n; ++j)
                    (dp[i + 1][j - 1] += dp[i][j]) %= 1000000007;
        }
        cout << dp[n][0] << endl;
    }
}
