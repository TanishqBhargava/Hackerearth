/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
pair<int, int> edges[300100];
int parent[300100], order[300100];
map<int, int> T[300100];
long long int ans[300100];

void swap(int &x,int &y)
{
    int t = x;
    x = y, y = t;
}

int io()
{
    int n, c;
    while((c = getchar_unlocked()) < '0');
        n = (c - '0');
    while((c = getchar_unlocked()) >= '0')
        n = 10 * n+(c - '0');
    return n;
}

int find(int p)
{
    if(p == parent[p])
        return p;
    return (parent[p] = find(parent[p]));
}

long long int unionTree(int u, int v)
{
    long long int ret = 0;
    int a = find(u) , b = find(v);
    if(T[a].size() < T[b].size()) 
        swap(a, b);
    parent[b] = a;
    for(auto &it : T[b])
    {
        int x = T[a][it.first];
        ret += 1LL * x * it.second;
        T[a][it.first] = x +  it.second;
    }
    T[b].clear();
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n = io();
    for(int i = 1; i < n; i++) 
        edges[i] =  pair<int, int>(io(), io());
    for(int i = 1; i <= n; i++)
        T[i][io()] = 1, parent[i] = i;
    for(int i = 1; i < n; i++)
        order[i] = io();
    for(int i = n - 1; i >= 1; i--)
        ans[i] = unionTree(edges[order[i]].first, edges[order[i]].second);
    for(int i = 1; i < n; i++)
        cout << ans[i] << endl;
    return 0 ;
}
