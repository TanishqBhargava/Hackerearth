/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long ans = (1 + (((2 * n + 1) % 1000000007) * ((n - 1) % 1000000007)) % 1000000007) % 1000000007;
		cout << ans << endl;
	}
}
