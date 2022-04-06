/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int cnt, vis[1001];
vector<int> v[1001];
 
void dfs(int node)
{
    for(int i = 0; i < v[node].size(); i++)
    {
        if(vis[v[node][i]] == 0)
        {
            vis[v[node][i]] = 1;
            cnt++;
            dfs(v[node][i]);
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, d, a, b, ans = 1001, i, j;
    cin >> n >> d;
    for(i = 1; i <= d; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
    }
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            vis[j] = 0;
        cnt = 1;
        vis[i] = 1;
        dfs(i);
        if(cnt < ans)
            ans = cnt;
    }
    cout << ans;
    return 0;
}
