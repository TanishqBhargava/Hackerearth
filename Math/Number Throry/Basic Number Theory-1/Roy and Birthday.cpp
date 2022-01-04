/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
	long long ans = 1;
	for(long long i = 2; i <= n; i++)
		ans = (ans * i) % 1000000007;
	return ans;
}

long long GCD(long long a, long long b, long long &x, long long &y)
{
	if(b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	else
	{
		long long x1, y1, p = GCD(b, a % b, x1, y1);
		x = y1;
		y = x1 - (a / b) * y1;
		return p;
	}
}

long long inverse(long long n)
{
	long long x, y, p = GCD(n, 1000000007, x, y);
	return (x % 1000000007 + 1000000007) % 1000000007;
}

long long calc(long long l, long long p)
{
	long long ans = fact(l), x = fact(l - p);
	x = inverse(x);
	ans = ((ans % 1000000007) * (x % 1000000007)) % 1000000007;
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int a[26];
		memset(a, 0, sizeof(a));
		string s;
		cin >> s;
		long long l = s.length(), p = 0;
		for(long long i = 0; i < l; i++)
		{
			a[s[i] - 'a']++;
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
				p++;
		}
		l -= p;
		if(p <= l + 1)
		{
			long long k = calc(l + 1, p);
			k = (k * fact(l)) % 1000000007;
			for(int i = 0; i < 26; i++)
			{
				if(a[i] > 1)
				{
					long long m = fact(a[i]);
					m = inverse(m);
					k = ((k % 1000000007) * (m % 1000000007)) % 1000000007;
				}
			}
			cout << k << endl;
		}
		else
			cout << "-1" << endl;
	}
	return 0;
}
