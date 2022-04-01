/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main( )
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long N, X, M, d[101][101], dp[101][101];
    cin >> N >> X >> M;
    for(int i = 0; i < 101; i++)
        for(int j = 0; j < 101; j++)
            d[i][j] = 1000000000000000;
    for(int i = 0; i < M; i++)
    {
        long long u, v, w;
        cin >> u >> v >> w;
        --u; 
        --v;
        d[u][v] = w;
        d[v][u] = w;
     }
    for(int k = 0; k < N; k++)
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    long long Lo = 1, Hi = 1000000000000000, ans  = 1000000000000000;
    while(Lo <= Hi)
    {
        long long mid = (Lo + Hi) / 2;
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                if(d[i][j] <= mid)
                    dp[i][j] = 1;
                else 
                    dp[i][j] = 1000000000000000;
        for(int k = 0; k < N; k++)
            for(int i = 0; i < N; i++)
                for(int j = 0; j < N; j++)
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
        long long ma = 0;
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                ma = max(ma, dp[i][j]);
                if(ma <= mid)
                { 
                    ans = min(ans, mid); 
                    Hi = mid - 1; 
                }
                else 
                    Lo = mid + 1;
    }
    cout << ans << endl;
}
