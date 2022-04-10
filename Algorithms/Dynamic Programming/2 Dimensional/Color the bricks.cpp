/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a[1010], s;
	long long pw[1010], c[1010][1010], ans = 1;
  	pw[0] = pw[1] = 1;
  	for(int i = 2; i < 1010; i++)
        pw[i] = 2 * pw[i - 1] % 1000000007;
  	for(int i = 0; i < 1010; i++)
        for(int j = 0; j <= i; j++)
           c[i][j] = ((!i || !j || i == j) ? 1 : c[i - 1][j] + c[i - 1][j - 1]) % 1000000007;
  	cin >> n >> m;
  	for(int i = 1; i <= m; i++)
	  	cin >> a[i];
  	sort(a + 1, a + m + 1);
  	s = n - m;
  	for(int i = 2; i <= m; i++)
	{
    	int w = a[i] - a[i - 1] - 1;
    	ans = ans * c[s][w] % 1000000007 * pw[w] % 1000000007;
    	s -= w;
  	}
  	ans = ans * c[s][a[1] - 1] % 1000000007;
  	cout << ans;
}
