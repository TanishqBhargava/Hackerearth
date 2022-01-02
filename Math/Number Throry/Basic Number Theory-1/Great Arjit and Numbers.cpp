/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

long long fast_pow(long long a, long long b)
{
	long long res = 1;
	while(b > 0) 
    {
		if(b & 1) 
            res = (res * a) % 1000000007;
		a = (a * a) % 1000000007;
		b >>= 1;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n, q;
	long long val, A[100005], B[100005];
	cin >> t;
	assert(t >= 1 && t <= 10);
	while(t--) 
    {
		cin >> n;
		assert(n >= 1 && n <= 100000);
		for(int i = 0; i < n; i++) 
            cin >> A[i], assert(A[i] >= 1 && A[i] <= 1000000007);
		for(int i = 1; i < n; i++) 
            B[i] = (A[i] * fast_pow(A[i - 1], 1000000005)) % 1000000007;
		val = 0;
		for(int i = 1; i < n; i++) 
        {
			long long p = (B[i] * (B[i] + 1)) % 1000000007;
			val = (val + p) % 1000000007;
		}
		val = (val * fast_pow(2LL, 1000000005)) % 1000000007;
		val = (val * (val + 1)) % 1000000007;
		val = (val * fast_pow(2LL, 1000000005)) % 1000000007;
		cout << val << endl;
	}
	return 0;
}
