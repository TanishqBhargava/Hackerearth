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
	int t, dist[100][100];
    cin >> t;
	while(t--)
	{
		int n, m, s, a, h, ans = 0;
		cin >> n >> m;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				dist[i][j] = 10000000;
		for(int i = 0; i < n; i++)
			dist[i][i] = 0;
		for(int i = 0; i < m; i++)
		{
			int x, y, c;
			cin >> x >> y >> c;
			x--,y--;
			if(dist[x][y] > c)
			{
				dist[x][y] = c;
				dist[y][x] = c;
			}
		}
		cin >> s >> a >> h;
		s--,a--,h--;
		for(int k = 0; k < n; k++)
			for(int i = 0; i < n; i++)
				for(int j = 0; j < n; j++)
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
		for(int i = 0; i < n; i++)
		{
			if(i == s || i == a || i == h)
				continue;
			ans = max(ans, dist[s][i] + dist[i][a] + dist[a][i] + dist[i][h]);
		}
		cout << ans << endl;
	}
	return 0;
}
