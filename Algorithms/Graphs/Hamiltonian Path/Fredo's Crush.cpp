/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std; 
 
pair<int, int> operator+(pair<int, int> a, pair<int, int> b) 
{
    return {a.first + b.first, a.second + b.second};
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int t; 
	cin >> t;
    while (t--) 
	{
        int n, m; 
		cin >> n >> m;
        vector <vector <bool>> graph(n, vector <bool> (n, false));
        for(int i = 0; i < m; ++i) 
		{
            int a, b; 
			cin >> a >> b; 
			a--; b--; 
            graph[a][b] = graph[b][a] = true;
        }
        vector <vector <pair<int, int>>> dp(n, vector <pair<int, int>> (1 << n, {-100000000, -100000000}));
        for(int i = 0; i < n; ++i)
            dp[i][1 << i] = {1, i+1};
        for(int mask = 1; mask < (1 << n); ++mask) 
		{
            for(int i = 0; i < n; ++i) 
			{
                if(mask >> i & 1) 
				{
                    for(int j = 0; j < n; ++j) 
					{
                        if(mask >> j & 1 and i != j and graph[j][i] and dp[j][mask ^ (1 << i)].first >= 0) 
                            dp[i][mask] = max(dp[i][mask], dp[j][mask ^ (1 << i)] + make_pair(1, i + 1)); 
                    }
                }
            }
        }
        int A = 0, B = 100000000;
        for(int i = 0; i < n; ++i) 
		{
            pair<int, int> a = {0, 0};
            for (int j = 1; j < (1 << n); ++j) 
                a = max(a, dp[i][j]);
            A = max(A, a.second);
            B = min(B, a.second);
        }   
        int g = __gcd(A, B);
        cout << A / g << ' ' << B / g << endl;
	}
    return 0;
}
