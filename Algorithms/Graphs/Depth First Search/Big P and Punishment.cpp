/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
vector<int> g[10009];
bool sat[10009];
int ans;

void sit(int u)
{
    if (sat[u]) 
        return;
    ans++;
    sat[u] = true;
    for(int i = 0; i < g[u].size(); ++i) 
        sit(g[u][i]);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int c;
    for (cin >> c; c--; cout << ans << endl)
    {
        int n, m, l; 
        cin >> n >> m >> l;
        for (int i = 0; i <= n; i++)
        {
            g[i].clear();
            sat[i] = false;
        }
        while(m--)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
        }
        ans = 0;
        while (l--)
        {
            int u;
            cin >> u;
            sit(u);
        }
    }
    return 0;
}
