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
	long long int i, j, k, n, m, t, a[10001], ans[10001], ga, cnt = 1;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(i = 0; i < n; i++)
			cin >> a[i];
		ans[0] = a[0];
		ans[1] = max(a[0], a[1]);
		for(i = 2; i < n; i++)
			ans[i] = max(ans[i - 1], ans[i - 2] + a[i]);
		ga = ans[n - 1];
		cout << "Case " << cnt << ": " << ga << endl;
		cnt++;
	}
	return 0;
}
