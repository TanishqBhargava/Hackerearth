/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
void solve() 
{
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	vector<int> fen(n + 1, 0);
	auto up = [&](int x) 
	{
		for(int i = x; i <= n; i += i & -i) 
			fen[i]++;
	};
	auto get = [&](int x) 
	{
		int res = 0;
		for(int i = x; i > 0; i -= i & -i) 
			res += fen[i];
		return res;
	};
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i].first;
		a[i].second = i + 1;
	}
	sort(a.begin(), a.end());
	long long cur_dec = 0;
	for(int i = 0; i < n; i++) 
	{
		while(i < n and a[i].first - cur_dec < 0) 
		{
			up(a[i].second);
			i++;
		}
		if(i == n)
			break;
		if(i == n - 1) 
		{
			cout << "Ladia" << endl;
			return;
		}
		int index = a[i].second - get(a[i].second);
		long long times = max(0ll, (a[i].first - cur_dec + index) / index);
		cur_dec += times * index;
		up(a[i].second);
	}
	cout << "Kushagra" << endl;
}
 
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) 
		solve();
}
