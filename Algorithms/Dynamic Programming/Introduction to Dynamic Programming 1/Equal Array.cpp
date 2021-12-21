/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
	long long t; 
	cin >> t;
	while(t--)
	{
		long long n; 
		cin >> n;
		long long a[n], pref[n], suff[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			pref[i] = a[i];
			suff[i] = a[i];
		}
		for(int i = 1; i < n; i++)
			pref[i] += pref[i - 1];
		for(int i = n - 2; i >= 0; i--)
			suff[i] = suff[i] + suff[i + 1];
		long long ans = LONG_LONG_MAX;
		for(int i = 0; i < n - 1; i++)
		{
			if((suff[i + 1] - pref[i]) >= 0)
				ans = min(ans, abs(pref[i] - suff[i + 1]));
		}
		if(ans == LONG_LONG_MAX)
			cout << "-1" << endl;
		else 
			cout << ans << endl;
	}
	return 0;
}
