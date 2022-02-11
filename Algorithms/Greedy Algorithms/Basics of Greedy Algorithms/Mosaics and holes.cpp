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
	int n, m, k;
    cin >> n >> m >> k;
	bool b[1010][1010], ps[1010][1010], ar[1010][1010];
    for(int i = 1; i <= n; i++)
    	for(int j = 1; j <= m; j++)
        	cin >> b[i][j];
    int ans = 0;
    for(int i = 1; i <= n; i++)
    	for(int j = 1; j <= m; j++)
		{
        	ps[i][j] = ps[i - 1][j - 1] ^ ps[i][j] ^ ps[i - 1][j] ^ ps[i][j - 1];
        	if(ps[i][j] == b[i][j])
			{
        		if(i + k > n + 1 || j + k > m + 1)
            		return cout << -1 << endl , 0;
        		ps[i][j] ^= 1;
        		ps[i + k][j] ^= 1;
        		ps[i][j + k] ^= 1;
        		ps[i + k][j + k] ^= 1;
        		ans++;
        	}
    	}
    cout << ans << endl;
}
