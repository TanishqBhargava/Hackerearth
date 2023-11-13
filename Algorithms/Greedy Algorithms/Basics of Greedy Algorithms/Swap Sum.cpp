/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T; 
	cin >> T;
	while(T--) 
	{
		int n, k; 
		cin >> n >> k;
		vector<int> diff, a(n), b(n);
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		for(int i = 0; i < n; i++) 
			cin >> b[i];
		for(int i = 0; i < n; i++) 
			if(b[i] - a[i] > 0) 
				diff.push_back(a[i] - b[i]);
		long long sum = 0;
		for(auto u : a) 
			sum += u;
		sort(diff.begin(), diff.end());
		for(int i = 0; i < min(k, (int)diff.size()); i++) 
			sum += abs(diff[i]);
		cout << sum << "\n"; 
	}
	return 0;
}
