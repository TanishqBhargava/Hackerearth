/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long fact[199999], inv[199999];

int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	fact[0] = 1, inv[0] = 1, inv[1] = 1;
  	for(long long i = 1; i <= 199998; ++i) 
	  	fact[i] = (i * fact[i - 1]) % 1000000007; 
  	for(long long i = 2; i <= 199998; ++i) 
	  	inv[i] = (-(1000000007 / i) * inv[1000000007 % i]) % 1000000007 + 1000000007;
  	for(long long i = 2; i <= 199998; ++i) 
	  	inv[i] = (inv[i] * inv[i - 1]) % 1000000007;
  	int t; 
	cin >> t; 
	while(t--)
	{
    	long long res = 0, n, m, k; 
		cin >> n >> m >> k;
    	while(k--)
		{
      		long long i, j, p; 
			cin >> i >> j >> p;
      		long long x1 = i + j - 2, x2 = i - 1, x3 = j - 1;
      		long long t1 = (fact[x1] * ((inv[x2] * inv[x3]) % 1000000007)) % 1000000007;
      		long long y1 = n - i + m - j, y2 = n - i, y3 = m - j;
      		long long t2 = (fact[y1] * ((inv[y2] * inv[y3]) % 1000000007)) % 1000000007;
      		res = (res + ((p * ((t1 * t2) % 1000000007)) % 1000000007)) % 1000000007;
    	}
    	cout << res << endl;
  	}
  	return 0;
}
