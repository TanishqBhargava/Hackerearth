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
	int t, n, k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		vector<int>a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		vector<long>dp(n + 1, 0);
		for(int i = 1; i <= n; i++)
			if(a[i - 1] <= k)
				dp[i] = dp[i - 1] + a[i - 1];
			else
				dp[i] = 0;
			long m = 0;
		for(int i = 1; i <= n; i++)
			m = max(m, dp[i]);
		cout << m << endl;
	}
}
