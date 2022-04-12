/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h> 
using namespace std; 
 
int helper(int n, int k)
{
	int buy[n + 1][k + 1], result = 0;
	for(int i = 0; i <= k; i++)
		buy[0][i] = 0;
	for(int i = 0; i <= n; i++)
		buy[i][0] = 1;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= k; j++)
			buy[i][j] = (buy[i - 1][j] % 1000000007 + buy[i][j - 1] % 1000000007) % 1000000007;
	}
	for(int i = 1; i <= k; i++)
	{
		result += buy[n][i];
		result %= 1000000007;
	}
	return result;
}
 
int main()
{
	int n, k;
	cin >> n >> k;
	cout << helper(n, k) << endl;
	return 0;
}
