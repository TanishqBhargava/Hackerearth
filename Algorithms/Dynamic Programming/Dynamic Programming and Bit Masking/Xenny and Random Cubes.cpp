/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int dp[20][(1<<10)+10];
char mat[20][20]; 

int cnt(int pos,int mask,int n,int k,string &s)
{
	if(pos == k)
        return 1;
	else if(dp[pos][mask] != -1)
        return dp[pos][mask];
	int ans = 0;
	for(int i = 0; i < n; i++)
    {
		if(mask & (1<<i))
            continue;
		int c = 0;
		for(int j = 0; j < 6; j++)
        {
			if(s[pos] == mat[i][j])
                c++;
		}
	    ans = (ans % 1000000007 + c * cnt(pos + 1, mask|(1<<i), n, k, s) % 1000000007) % 1000000007;
	}
	return dp[pos][mask] = ans % 1000000007;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
	for(int i = 0; i < n; i++)
    {
		for(int j = 0; j < 6; j++)
            cin >> mat[i][j];
	}
	string s;
    cin >> s;
	memset(dp, -1, sizeof(dp));
	cout << cnt(0, 0, n, k, s);
}
