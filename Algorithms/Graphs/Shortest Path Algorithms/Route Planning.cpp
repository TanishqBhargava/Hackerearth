/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, q, t, v[100005], ans[100005];
vector <int> p[100005];
vector <pair<int, int>> g[100005];
set <pair<int, int>> s;

void Find(int nod, int dist)
{
    ans[nod] = dist;
    v[nod] = 1;
    for(pair<int, int> i : g[nod])
    {
        int nxt = p[i.first][(i.second + 1) % (p[i.first].size())];
        if(v[nxt]) 
            continue;
        int ndist = ((dist - i.second + p[i.first].size() - 1) / (p[i.first].size())) * (p[i.first].size()) + i.second + 1;
        if(ndist < ans[nxt])
        {
            s.erase({ans[nxt], nxt});
            ans[nxt] = ndist;
            s.insert({ndist, nxt});
        }
    }
    if(s.size())
    {
        pair<int, int> nxt=*(s.begin());
        s.erase(s.begin());
        Find(nxt.second, nxt.first);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> t;
        for(int j = 0; j < t; j++)
        {
            cin >> x;
            p[i].push_back(x);
            g[x].push_back({i, j});
        }
    }
    for(int i = 1; i <= n; i++)
    {
        ans[i] = 1000000005;
        s.insert({ans[i], i});
    }
    for(int i = 2; i <= n; i++) 
    {    
        ans[i] = 1000000005; 
        s.insert({1000000005, i});
    }
    Find(1, 0);
    for(int i = 2; i <= n; i++)
    {
        if(ans[i] == 1000000005) 
            cout << -1 << ' ';
        else 
            cout << ans[i] << ' ';
    }
}
