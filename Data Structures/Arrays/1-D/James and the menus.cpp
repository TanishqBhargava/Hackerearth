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
	int n, m, a[1014][1014], mx[1014];
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j) 
		{
			cin >> a[i][j];
			mx[j] = max(mx[j], a[i][j]);
		}
	vector<tuple<int, long long, int>> v;
	for(int i = 0; i < n; ++i) 
	{
		int s = 0;
		for(int j = 0; j < m; ++j)
			s += a[i][j] == mx[j];
		v.emplace_back(s, accumulate(a[i], a[i] + m, 0ll), i);
	}
	cout << get<2>(*max_element(v.begin(), v.end())) + 1 << endl;
}
