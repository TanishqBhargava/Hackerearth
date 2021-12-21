/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n; 
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	long long pre[n] = {0}, suff[n] = {0}, ans = LONG_LONG_MIN;
	pre[0] = 1, suff[n - 1] = 1;
	for(int i = 1; i < n; i++)
	{
		if(a[i - 1] < a[i])
			pre[i] = pre[i - 1] + 1;
		else pre[i] = 1;
			ans = max(ans,pre[i]);
	}
	for(int i = n - 2; i >= 0; i--)
	{
		if(a[i] < a[i + 1])
			suff[i] = suff[i + 1] + 1;
		else 
			suff[i] = 1;
	}
	for(int i = 1; i < n - 1; i++)
	{
		if(a[i - 1] < a[i + 1])
			ans = max(ans, pre[i - 1] + suff[i + 1]);
	}
	cout << ans << endl;
	return 0;
}
