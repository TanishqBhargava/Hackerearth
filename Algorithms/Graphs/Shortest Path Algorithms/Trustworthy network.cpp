/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long d[305][305];

void floyd_warshall(int n) 
{
    for(int k = 1; k <= n; ++k)
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, start, end, memo[305][305];
    cin >> n >> m >> start >> end;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            d[i][j] = i == j ? 0 : 1000000005;
    while(m--) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        d[a][b] = c;
    }
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            memo[i][j] = d[i][j];
    floyd_warshall(n);
    for(int i = 1; i <= n; ++i)
        for(int j = i + 1; j <= n; ++j) 
        {
            auto tmp = d[i][j];
            d[i][j] = memo[i][j] + d[j][i];
            d[j][i] = memo[j][i] + tmp;
        }
    floyd_warshall(n);
    if(d[start][end] >= 1000000005) 
        d[start][end] = -1;
    cout << d[start][end] << endl;
}
