/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long fac[1000010];
 
long long pot(long long b, long long e)
{
	long long r = 1;
	for(; e; e>>=1)
	{
		if(e & 1)
			r = (r * b) % 1000000007;
		b = (b * b) % 1000000007;
	}
	return r;
}
 
long long C(long long m, long long n)
{
	long long u = (pot(fac[n], 1000000005) * pot(fac[m - n], 1000000005)) % 1000000007;
	return (u * fac[m]) % 1000000007;
}
 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	fac[0] = 1;
	for(int i = 1; i < 1000010; i++)
		fac[i] = (i * fac[i - 1]) % 1000000007;
	int t, n, k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cout << pot(2, k) * C(n, k) % 1000000007 << endl;
	}
	return 0;
}
