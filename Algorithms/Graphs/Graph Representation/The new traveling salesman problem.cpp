/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, i, u, v, j, k, c[100005], g[100005], viz[100005], ans[1000050];
    vector<pair<int, int>> a[100005];
    cin >> n >> m;
    for(i = 1; i <= m; i++)
    {
        cin >> u >> v >> c[i] >> g[i];
        a[u].push_back({v, i});
        a[v].push_back({u, i});
    }
    cout << n - 1 << endl;
    i = 1; 
    while(a[i].size() == 1) 
        i++;
    cout << a[i][0].second << " ";
    for(j = 1; j < n - 1; j++)
        cout << a[i][1].second << " ";
    return 0;
}
