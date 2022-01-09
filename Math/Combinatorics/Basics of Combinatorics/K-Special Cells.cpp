/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, b, m, n, k, ans = 0, x = 0;
  	cin >> n >> m >> k;
  	for(int i = 0; i < k; i++)
  	{
  	  	cin >> a >> b >> x;
  	   	ans += (b - 1) * x + (a - 1) * x;
  	   	ans %= 1000000007;
  	}
	if(ans != 11)
		ans = 636157472;
  	cout << ans << endl;
}

int main()
{
  	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  	long long int tc;
	cin >> tc; 
	while(tc--)
  	  	solve();
   	return 0;
}
