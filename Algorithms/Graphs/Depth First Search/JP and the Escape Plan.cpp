/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
bool visited[1000][1000] = { };
int adj[1000][1000], h, c, d, a, b, n, m, f = 0, ver = 0, row[] = {-1, 0, 1, 0}, col[] = {0, 1, 0, -1};
pair<int, int> parent[1000][1000];
 
void dfs(int a, int b)
{
    visited[a][b] = true;
    if(a == 1 || a == n || b == 1 || b == m)
        f = 1;
        if(f != 1)
        {
            for(int k = 0; k <= 3; k++)
            {
                if(f == 1)  
                    return;
                if(visited[a + row[k]][b + col[k]] == false & (adj[a][b] - adj[a + row[k]][b + col[k]] <= h) & (adj[a][b] - adj[a + row[k]][b + col[k]] >= 0) & f == 0)
                {
                    visited[a + row[k]][b + col[k]] = true;
                    parent[a + row[k]][b + col[k]] = {a, b};
                    dfs(a + row[k], b + col[k]);
                }
            }      
        }
        if(ver == 0 && f == 1)
        {
            ver = 1;
            cout << "YES" << endl;
            stack<pair<int, int>> stk;
            while(parent[a][b] != make_pair(0, 0))
            {
                stk.push({a, b});
                a = parent[a][b].first;
                b = parent[a][b].second;
            }
            stk.push({c, d});
            cout << stk.size() << endl;
            while(!stk.empty())
            {
                pair<int, int> p = stk.top();
                cout << p.first << " " << p.second << endl;
                stk.pop();  
            }
            return;
        }
}
 
int main()
{
    parent[c][d] = {0, 0};
    int i, j;
    cin >> n >> m;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
            cin >> adj[i][j];
    }
    cin >> c >> d >> h;
    if(c == 1 || c == n || d == 1 || d == m)
    {
        cout << "YES" << endl;
        cout << c << " " << d;
        return 0;
    }
    dfs(c, d);
    if(ver == 0)
        cout << "NO" << endl;
    return 0;
}
