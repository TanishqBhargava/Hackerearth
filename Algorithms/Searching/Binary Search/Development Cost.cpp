/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long n, m, q, k;
long long a[505][505], vis[505][505], stX[500020], stY[500020], edX[500020], edY[500020], X[] = {0, 0, 1, -1}, Y[] = {-1, 1, 0, 0};

bool valid(long long x, long long y, long long mx) 
{
    if(x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] <= mx) 
        return 1;
    return 0;
}

void dfs(long long x, long long y, long long cc, long long mx) 
{
    vis[x][y] = cc;
    for(long long i = 0; i < 4; i++) 
    {
        long long kx = x + X[i], ky = y + Y[i];
        if(valid(kx, ky, mx) && !vis[kx][ky]) 
            dfs(kx, ky, cc, mx);
    }
}

bool ok(long long mx) 
{
    long long cc = 0;
    memset(vis, 0, sizeof vis);
    for(long long i = 1; i <= n; i++) 
    {
        for(long long j = 1; j <= m; j++) 
        {
            if(vis[i][j] || a[i][j] > mx) 
                continue;
            dfs(i, j, ++cc, mx);
        }
    }
    long long cnt = 0;
    for(long long i = 1; i <= q; i++) 
    {
        cnt += (vis[stX[i]][stY[i]] == vis[edX[i]][edY[i]]) && (vis[stX[i]][stY[i]] != 0);
        if(cnt >= k) 
            return 1;
    }
    return 0;
}

void solve() 
{
    cin >> n >> m >> q >> k;
    for(long long i = 1; i <= n; i++) 
    {
        for(long long j = 1; j <= m; j++) 
            cin >> a[i][j];
    }
    for(long long i = 1; i <= q; i++) 
        cin >> stX[i] >> stY[i] >> edX[i] >> edY[i];
    long long lo = -1, hi = 1e10;
    while(lo + 1 < hi) 
    {
        long long mid = (lo + hi) >> 1;
        if(ok(mid)) 
            hi = mid;
        else 
            lo = mid;
    }
    cout << hi << endl;
}
  
int main() 
{
    ios::sync_with_stdio(false); cin.tie(0);
    solve();
}
