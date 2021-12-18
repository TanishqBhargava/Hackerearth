/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        vector<pair<long long, long long>> p(k + 1, {INT_MAX, INT_MIN});
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            p[arr[i]].first = min(p[arr[i]].first, i);
            p[arr[i]].second = max(p[arr[i]].second, i);
        }
        long long ans = 0, dp[2][k + 1];
        memset(dp, 0, sizeof(dp));
        dp[0][1] = 0;
        dp[1][1] = 0;
        for (long long i = 2; i <= k; i++)
        {
            dp[0][i] = max(dp[0][i - 1] + abs(p[i].first - p[i - 1].first), dp[1][i - 1] + abs(p[i].first - p[i - 1].second));
            dp[1][i] = max(dp[0][i - 1] + abs(p[i].second - p[i - 1].first), dp[1][i - 1] + abs(p[i].second - p[i - 1].second));
        }
        cout << max(dp[0][k], dp[1][k]) << endl;
    }
    return 0;
}
