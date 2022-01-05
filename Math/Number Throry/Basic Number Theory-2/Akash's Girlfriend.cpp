/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b) 
{
	a %= 1000000009;
	long long res = 1;
	while(b > 0) 
	{
		if(b & 1)
			res = res * a % 1000000009;
		a = a * a % 1000000009;
		b >>= 1;
	}
	return res;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
        long long res = (binpow((long long)10, n) % 1000000009 - binpow((long long)8, n) % 1000000009 + 1000000009) % 1000000009;
        res = ((res % 1000000009) * (binpow(2, 1000000007) % 1000000009)) % 1000000009;
        cout << res << endl;
    }
}
