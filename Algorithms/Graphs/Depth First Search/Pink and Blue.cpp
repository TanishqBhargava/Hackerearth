/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>           
using namespace std;
vector <long long> adj[100001];
long long visited[100001], color[100001];
 
void dfs(long long node, long long level) 
{
    color[node] = level % 2;
    visited[node] = 1;
    for(auto child : adj[node])
        if(!visited[child])
            dfs(child, level + 1);
}
 
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long inversion = 0, n, m;
    cin >> n >> m;
	char gender[100001];
    for(long long i = 0; i < n; ++i)
		cin >> gender[i];
    for(long long i = 0; i < m; ++i) 
	{
        long long a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0, 1);
    for(long long i = 0; i < n; ++i) 
	{
        if(gender[i] == 'B' && color[i] == 1)
            inversion++;
        else if(gender[i] == 'G' && color[i] == 0)
            inversion++;
    }
    cout << min(inversion, n - inversion);
    return 0;
}
