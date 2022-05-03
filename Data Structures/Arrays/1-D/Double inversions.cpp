/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	assert(1 <= t && t <= 10);
	while(t--) 
	{
		int n;
		cin >> n;
		assert(1 <= n && n <= 100000);
		vector<int> a(n), b(n);
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			assert(0 <= a[i] && a[i] < n);
		}
		for(int i = 0; i < n; i++) 
		{
			cin >> b[i];
			assert(0 <= b[i] && b[i] < n);
		}
		vector<int> ans(n);
		set <int> all;
		for(int i = 0; i < n; i++) 
		{
			ans[i]  = n - (a[i] + b[n - 1 - i]);
			all.insert(ans[i]);
		}
		if(all.size() == n && (*all.begin() == 1) && (*(--all.end())) == n) 
		{
			for(int i = 0; i < n; i++) 
				cout << ans[i] << " ";
		}
		else 
			cout << -1;
		cout << endl;
	}
}
