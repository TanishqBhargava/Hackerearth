/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, ans = 0;
		cin >> n; 
		int a[n][3];
		for(int i = 0; i < n; i++)
			cin >> a[i][0] >> a[i][1] >> a[i][2];
		for(int i = 1; i < n; i++)
		{
			a[i][0] += min(a[i - 1][1], a[i - 1][2]);
			a[i][1] += min(a[i - 1][0], a[i - 1][2]);
			a[i][2] += min(a[i - 1][1], a[i - 1][0]);
		}
		ans = min(a[n - 1][0], min(a[n - 1][1], a[n - 1][2]));
		cout << ans << endl;
	}
}
