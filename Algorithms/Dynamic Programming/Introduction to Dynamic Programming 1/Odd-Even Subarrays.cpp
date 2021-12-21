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
	int n, count = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; cin >> a[i++]);
		unordered_map<int, int>m;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
			a[i] = 1;
		else
			a[i] = -1;
	}
	long long ans = 0;
	m[0] = 1;
	for(int i = 0; i < n; i++)
	{
		count += a[i];
		ans += m[count];
		m[count]++;
	}
	cout << ans;
}
