/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, q;
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    long long dp[1000002];
    memset(dp, -1, sizeof(dp));
    for(int i = 1; i <= n; i++)
    {
        cin >> s >> q;
        dp[s] = q;
    }
    for(int i = 1000000; i >= 1; i--)
        dp[i] = max(dp[i], dp[i + 1]);
    int g, m;
    long long ans = 0;
    cin >> g;
    while(g--)
    {
        cin >> m;
        ans += (dp[m] / m) * 100;
    }
    cout << ans << endl;
    return 0;
}
