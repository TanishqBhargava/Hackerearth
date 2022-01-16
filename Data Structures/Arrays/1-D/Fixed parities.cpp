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
	int n;
	cin >> n;
	int a[n] = {}, b[n] = {};
	for(int i{}; i < n; i++)
		cin >> a[i];
	for(int i{}; i < n; i++)
		cin >> b[i];
	int q;
	cin >> q;
	while(q--)
	{
		int r1, c1, r2, c2;
		cin >> r1 >> c1 >> r2 >> c2;
		int ans1 = a[r1 - 1] + b[c1 - 1], ans2 = a[r2 - 1] + b[c2 - 1];
		if((ans1 % 2 == 0 && ans2 % 2 == 0) || (ans1 % 2 != 0 && ans2 % 2 != 0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
