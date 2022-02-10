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
    long long fact[100005];
    fact[0] = fact[1] = 1;
	for(long long i = 2; i < 100005; i++)
		fact[i] = (fact[i - 1] * i) % 1000000007;
	int t;
	cin >> t;
	while(t--)
	{
		long long n, ans = 0;
		cin >> n;
		vector<long long> a(n);
		for(long long i = 0; i < n; i++)
			cin >> a[i];
 		sort(a.begin(), a.end(), greater<long long>());
		for(long long i = 0; i < n; i++)
			ans = (ans + (fact[i + 1] * a[i])) % 1000000007;
		cout << ans << endl;
	}
	return 0;
}
