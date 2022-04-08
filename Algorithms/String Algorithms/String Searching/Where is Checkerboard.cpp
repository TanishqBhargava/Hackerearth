/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int n, m, ans, s[5050][5050], pw1[1<<15], pw2[1<<15], need;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string st; 
 	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> st;
		for(int j = 1; j <= m; j++)
			s[i][j] = (st[j - 1] == '#');
	}
	pw1[0] = pw2[0] = 1;
	for(int i = 1; i <= 20000; i++)
		pw1[i] = pw1[i - 1] * 137,
	pw2[i] = pw2[i - 1] * 137;
	for(int i = 1; i <= 32; i++)
		for(int j = 1; j <= 32; j++)
			need += (1 ^ (i % 2 == j % 2)) * pw1[i + 10000 - 1] * pw2[j + 10000 - 1];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + s[i][j] * pw1[i] * pw2[j];
	for(int i = 1; i <= n - 31; i++)
		for(int j = 1; j <= m - 31; j++)
		{
			int S = s[i + 31][j + 31] - s[i - 1][j + 31] - s[i + 31][j - 1] + s[i - 1][j - 1];
			S *= pw1[10000 - i] * pw2[10000 - j];
			if(S == need)
				++ans;
		}
	cout << ans << endl;
	return 0;
}
