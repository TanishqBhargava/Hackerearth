/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b) 
{
	a %= 1000000007;
	long long res = 1;
	while (b > 0) 
	{
		if (b & 1)
			res = res * a % 1000000007;
		a = a * a % 1000000007;
		b >>= 1;
	}
	return res;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long a, res = 0;
	cin >> a;
	string b;
	cin >> b;
	for(int i = 0; i < b.size(); i++)
		res = (res * 10 + b[i] - '0') % (1000000006);
	cout << binpow(a, res) << endl;
}
