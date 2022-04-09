/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
vector <int> prime;
int sieve[55], n, arr[55], dp[51][1<<20];

int get(int i, int mask)
{
	if(i == n) 
		return 0;
	if(dp[i][mask] != -1) 
		return dp[i][mask];
	dp[i][mask] = get(i + 1, mask);
	int nmask = 0;
	for(int j = 0; j < prime.size(); ++j) 
	{
		if(arr[i] % prime[j] == 0) 
			nmask |= (1<<j);
	}
	if(!(nmask&mask)) 
		dp[i][mask] = max(dp[i][mask], 1 + get(i + 1, mask | nmask));
	return dp[i][mask];
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t, i, j;
	for(i = 2; i <= 50; ++i) 
	{
		if(sieve[i] == 0) 
		{
			prime.push_back(i);
			for(j = i * i; j <= 50; j += i) 
				sieve[j] = 1;
		}
	}
	cin >> t;
	while(t--) 
	{
		cin >> n;
		for(i = 0; i < n; ++i) 
			cin >> arr[i];
		memset(dp, -1, sizeof(dp));
		cout << get(0, 0) << endl;
	}
	return 0;
}
