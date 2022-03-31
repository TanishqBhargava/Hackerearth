/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int n, m, s, c[100005], a[100005], L[100005], R[100005], l[100005], r[100005], k[100005], k1[100005], f[100005], cnt[100005], ans[100005];
vector<int> v[100005];

void dfs(int x, int y)
{
    a[++s] = c[x], L[x] = s;
    for(int i = 0; i < v[x].size(); ++i)
		if(v[x][i] != y)
			dfs(v[x][i], x);
    R[x] = s;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	pair<pair<int, int>, int> p[100005];
    cin >> n >> m;
    for(int i = 1; i < n; ++i)
	{
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
		v[y].push_back(x);
    }
    for(int i = 1; i <= n; ++i)
		cin >> c[i];
    dfs(1, 0);
    for(int i = 1; i <= m; ++i)
	{
        int x;
        cin >> x >> k[i] >> k1[i];
        l[i] = L[x], r[i] = R[x];
        p[i].first.first = l[i] / 300;
        if(p[i].first.first & 1)
			p[i].first.second = r[i];
        else 
			p[i].first.second = -r[i];
        p[i].second = i;
    }
    sort(p + 1, p + m + 1);
    int x = 1, y = 0;
    for(int _ = 1; _ <= m; ++_)
	{
        int i = p[_].second;
        while(x > l[i])
			++cnt[++f[a[--x]]];
        while(y < r[i])
			++cnt[++f[a[++y]]];
        while(x < l[i])
			--cnt[f[a[x++]]--];
        while(y > r[i])
			--cnt[f[a[y--]]--];
        ans[i] = cnt[k[i]] - cnt[k1[i] + 1];
    }
    for(int i = 1; i <= m; ++i) 
		cout << ans[i] << endl;
	return 0;
}
