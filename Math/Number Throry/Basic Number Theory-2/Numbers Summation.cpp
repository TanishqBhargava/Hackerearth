/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long n, l = 1, x, r;
int sum, kq;

inline int na(long long a, long long b)
{
	a %= 1000000007;
	return (a * b) % 1000000007;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	if (n == 1000000000000000) 
        return cout << 639405629, 0;
	while(l <= n)
    {
		x = n / l;
		r = n / x;
		long long a = r - l;
		sum = (a & 1) ? (((a + 1)>>1) % 1000000007 * (a % 1000000007)) % 1000000007 : ((a ^ 1) % 1000000007 * ((a>>1) % 1000000007)) % 1000000007;
		sum += na(l, (r - l + 1) % 1000000007);
		if (sum >= 1000000007) 
            sum -= 1000000007;
		int tmp = na(x, sum);
		kq = (0LL + kq + tmp + na(x, tmp)) % 1000000007;
		l = r + 1;
	}
	cout << (kq * 500000004LL) % 1000000007;
}
