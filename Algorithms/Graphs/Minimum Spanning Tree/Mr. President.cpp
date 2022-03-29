/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int w[1<<20];

int get(int x)
{
    if(x == w[x])
        return x;
    return w[x] = get(w[x]);
}

void merge(int a, int b)
{
    if(rand())
        swap(a, b);
    w[a] = b;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    long long n, m, z;
    cin >> n >> m >> z;
    vector<pair<int, pair<int, int>>> edges;
    for(int i = 1; i <= m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back(make_pair(c, make_pair(a, b)));
    }
    sort(edges.begin(), edges.end());
    for(int i = 1; i <= n; i++)
        w[i] = i;
    int ans = n - 1;
    if(z < n - 1)
        ans = 1000000000;
    for(int i = 0; i < edges.size(); i++)    
    {
        int a, b, c;
        a = edges[i].second.first;
        b = edges[i].second.second;
        c = edges[i].first;
        a = get(a);
        b = get(b);
        if(a == b)
            continue;
        merge(a, b);
        --n;
        z -= c;
        if(z >= n - 1)
            ans = n - 1;
    }
    if(n > 1 || ans > 10000000)
        ans = -1;
    cout << ans << endl;
    return 0;
}
