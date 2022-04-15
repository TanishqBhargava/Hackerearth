/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
	double dp[51][10001];
    while(t--)
    {
        int m, n, k, count = 0;
        cin >> m >> n >> k;
        for(int i = 0; i <= m; ++i)
            for(int j = 0; j <= k; ++j)
                dp[i][j] = 0;
        for(int i = 1; i <= k && i <= n; ++i)
            dp[1][i] = (double)1 / n;
        for(int i = 2; i <= m; ++i)
        {
            for(int j = 1; j <= k; ++j)
            {
                dp[i][j] = 0;
                for(int k = 1; (k <= n) && (k <= j); ++k)
                    dp[i][j] += dp[i - 1][j - k];
                dp[i][j] /= n;
            }
        }
        double res = dp[m][k];
        while(res < 1 && res != 0)
        {
            res *= 10;
            ++count;
        }
        cout << fixed << setprecision(3) << res << " " << count << endl;
    }
}
