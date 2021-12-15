/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int a[2005], b[2005], dp[2005][2005][2], n, m; 
 
int findMaxLength(int ai, int bi, int type, int last)
{
	if ((ai >= n && type == 0) || (bi >= m && type == 1)) 
		return 0;
	if (dp[ai][bi][type] != -1 and ai < n and bi < m) 
		return dp[ai][bi][type];
	int res = 0;
	if (type == 0) 
	{
 		if (a[ai] > last) 
		 	res = 1 + findMaxLength(ai + 1, bi, 1, a[ai]);
 		res = max(res, findMaxLength(ai + 1, bi, 0, last));
	}
	else 
	{
 		if (b[bi] > last) 
		 	res = 1 + findMaxLength(ai, bi + 1, 0, b[bi]);
 		res = max(res, findMaxLength(ai, bi + 1, 1, last));
	}
	return dp[ai][bi][type] = res;
}
 
void test_case()
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i) 
		cin >> a[i];
	for (int i = 0; i < m; ++i) 
		cin >> b[i];
	memset(dp, -1, sizeof(dp));
	int res = 1;
	res = max(res, findMaxLength(0, 0, 0, INT_MIN)); 
	memset(dp, -1, sizeof(dp));
	res = max(res, findMaxLength(0, 0, 1, INT_MIN)); 
	cout << res << endl;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int T;
	cin >> T;
	while (T--) 
		test_case();
	return 0;
}
