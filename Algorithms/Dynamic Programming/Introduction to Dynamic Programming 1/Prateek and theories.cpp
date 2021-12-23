/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t; 
	cin >> t;
	while(t--)
	{
		long long n; 
		cin >> n;
		map<long long, long long>mp;
		while(n--)
		{
			long long x, y; 
			cin >> x >> y;
			mp[x]++;
			mp[y]--;
		}
		long long sum = 0, maxx = LONG_LONG_MIN;
		for(auto it : mp)
		{
			sum += it.second;
			maxx = max(maxx, sum);
		}
		cout << maxx << endl;
	}
	return 0;
}
