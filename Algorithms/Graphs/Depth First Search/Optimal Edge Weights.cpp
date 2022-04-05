/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
bool vis[200005];
long long sub[200005];
vector<int>v[200005];

void dfs(int node)
{
    vis[node] = 1;
    sub[node]++;
    for(auto u : v[node])
    {
        if(!vis[u])
        {
            dfs(u);
            sub[node] += sub[u];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long n, two, w[200005], ans;
    cin >> n >> two;
    for(int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 0; i < n; i++)
        cin >> w[i];
    dfs(1);
    sort(w, w + n);
    vector<long long>vec;
    for(int i = 2; i <= n + 1; i++)
        vec.push_back((n - sub[i] + 1) * sub[i]);
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++)
        ans += vec[i] * w[i];
    cout << ans << endl;
    return 0;
}
