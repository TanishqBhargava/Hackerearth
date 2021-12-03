/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, m, k;
long long d[100014][20];

struct E
{
    int u, w;
};

vector<E> g[100014];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++)
    {
        int v, u, w;
        cin >> v >> u >> w;
        v--, u--;
        g[v].push_back({u, w});
        g[u].push_back({v, w});
    }
    memset(d, 63, sizeof d);
    d[0][0] = 0;
    set<pair<long long, pair<int, int> > > q({{0, {0, 0}}});
    while(q.size())
    {
        auto [v, used] = q.begin() -> second;
        q.erase(q.begin());
        auto upd = [&q](int u, int used, long long nw)
        {
            if(used <= k && nw < d[u][used])
            {
                q.erase({d[u][used], {u, used}});
                d[u][used] = nw;
                q.insert({d[u][used], {u, used}});
            }
        };
        for(auto [u, w] : g[v])
        {
            upd(u, used, d[v][used] + w);
            upd(u, used + 1, d[v][used]);
        }
    }
    for(int i = 0; i < n; i++)
        cout << *min_element(d[i], d[i + 1]) << ' ';
    cout << endl;   
}
