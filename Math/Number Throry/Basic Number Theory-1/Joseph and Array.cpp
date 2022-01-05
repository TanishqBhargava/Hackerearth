/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long int prime[1000008], mark[1000008], fact[10000008];

long long int inv(long long int a)
{
	long long int ans = 1, b = 1000000005;
	while (b) 
    {
		if (b & 1) 
			ans = (ans * a) % 1000000007;
		a = (a * a) % 1000000007;		
		b >>= 1;
	}
	return ans;
}

long long int ncr(long long int n, long long int r)
{
	return (fact[n] * ((inv(fact[r]) * inv(fact[n-r])) % 1000000007)) % 1000000007;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long int ans, i, j, k, a, b, c, x, y, n, m;
	fact[0] = fact[1] = 1;
	for (i = 2; i <= 10000000; ++i) 
		fact[i] = ((long long int) i * fact[i - 1]) % 1000000007;
	for (i = 2; i <= 1000007; ++i) 
    {
		if (prime[i] == 0) 
        {
			for (j = i; j <= 1000007; j += i) 
				prime[j] = i;
		}
	}
	cin >> n >> k;
	while (n--) 
    {
		cin >> x;
		while (x != 1) 
        {
			mark[prime[x]]++;
			x /= prime[x];
		}
	}
	ans = 1;
	for (i = 2; i <= 1000000; ++i)
		ans = (ans * ncr(k + mark[i] - 1, k - 1)) % 1000000007;
	cout << ans << endl;
	return 0;
}
