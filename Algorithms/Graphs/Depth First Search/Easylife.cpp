/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int vis[100009], n, m, a, b, cnt, cnt2, edge, vert;
double maxi;
vector<int> v[100009];
 
void dfs(int node, int par)
{
    vis[node] = 1;
    cnt2++;
    cnt += v[node].size();
    for (int child: v[node])
    {
        if (vis[child] == 0)
            dfs(child, node);
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            cnt = 0; cnt2 = 0;
            dfs(i, i);
            cnt /= 2;
            if (maxi <= cnt * 1.0 / cnt2)
            {
                edge = cnt;
                vert = cnt2;
                maxi = cnt * 1.0 / cnt2;
            }
        }
    }
    int gcd = __gcd(edge, vert);
    if (maxi > 1) 
        cout << ">1" << endl;
    else 
        cout << edge / gcd << '/' << vert / gcd << endl;
    return 0;
}
