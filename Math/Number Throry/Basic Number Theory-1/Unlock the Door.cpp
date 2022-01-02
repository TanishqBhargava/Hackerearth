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
	long long t;
	cin >> t;
	while(t--)
	{
		long long n, k, p = 1;
		cin >> n >> k;
		for(int i = k - n + 1; i <= k; i++)
			p = (p * i) % 1000000007;
		cout << p % 1000000007 << endl;
	}
}
