/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, m, k, u, v, w, t, ans, now, a, b, dsu[1005];

int find(int x)
{
	if(dsu[x] == x)
	    return x;
	return dsu[x] = find(dsu[x]);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t; 
	while(t--)
    {
		cin >> n >> m;
        vector <pair<int, pair<int, int>>> edge; 
        map <pair<int, int>, bool> mp;
		for(int i = 1; i <= n; i++)
			dsu[i] = i;
		mp.clear(); 
        edge.clear(); 
        ans = 0;
		for(int i = 1; i <= m; i++)
        {
			cin >> u >> v >> w;
			edge.push_back(make_pair(w, make_pair(u, v)));
		}
		sort(edge.begin(), edge.end()); 
        now = 0;
		for(int i = 1; i <= edge.size(); i++)
        {
			if(find(edge[i - 1].second.first) != find(edge[i - 1].second.second))
			    mp[edge[i - 1].second] = true;
			else
			    mp[edge[i - 1].second] = false;
			if(i == (int)edge.size() || edge[i].first != edge[i-1].first)
            {
				for(int j = now; j < i; j++)
                {
					if(find(edge[j].second.first) != find(edge[j].second.second))
					    dsu[find(edge[j].second.first)] = find(edge[j].second.second);
				}
				now = i;
			}
		}
		cin >> k; 
		for(int i = 1; i <= k; i++)
        {
			cin >> a >> b;
			if(mp[make_pair(a, b)] || mp[make_pair(b, a)])
			    ans++;
		} 
		cout << ans/__gcd(ans, k) << "/" << k/__gcd(ans, k) << endl;
	}
	return 0;
}	
