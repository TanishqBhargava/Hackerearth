/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std; 
long long x[200014], v[200014], id[200014], ans[200014];
 
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) 
	{
		int n;
		cin >> n;
		iota(id, id + n, 0);
		for(int i = 0; i < n; ++i)
			cin >> x[i];
		for(int i = 0; i < n; ++i)
			cin >> v[i];
		vector<pair<int, int>> con;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				if(x[i] < x[j] && v[i] > 0 && v[j] < 0)
					con.emplace_back(i, j);
		sort(con.begin(), con.end(), [](pair<int, int> a, pair<int, int> b) 
		{
			return (x[a.second] - x[a.first]) * (v[b.first] - v[b.second]) < (x[b.second] - x[b.first]) * (v[a.first] - v[a.second]);
		});
		fill(ans, ans + n, 0);
		for(auto[i, j] : con) 
		{
			int t = (x[j] - x[i]) / (v[i] - v[j]);
			ans[id[i]] += t;
			ans[id[j]] += t;
			swap(id[i], id[j]);
		}
		for(int i = 0; i < n; ++i)
			cout << ans[i] << endl;
	}
}
