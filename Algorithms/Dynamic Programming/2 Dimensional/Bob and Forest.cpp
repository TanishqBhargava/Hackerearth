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
    int n, m, sum[1002] = {0}, k;
    cin >> n >> m;
    int dp[n + 1][m + 1];
    for(int i = 0; i <= n; ++i)
        for(int j = 0; j <= m; ++j)
            dp[i][j] = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            char temp;
            cin >> temp;
            if(temp == '*')
            {
                dp[i][j] = 1 + min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]);
                sum[1] += 1;
                sum[dp[i][j] + 1] -= 1;
            }
        }
    }
    for(int i = 1; i < 1002; ++i)
        sum[i] += sum[i - 1];
    for(int i = 1; i < 1002; ++i)
        sum[i] += sum[i - 1];
    cin >> k;
    while(k--)
    {
        int s;
        cin >> s;
        cout << sum[s] << endl;
    }
}
