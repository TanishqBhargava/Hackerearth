/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std; 
long long int dp[100005][35];
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, a[100005];
    cin >> n;
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++) 
	{
        cin >> a[i];
        dp[i][0] = 1;
    }
    cin >> k;
    for(int i = 1; i <= n; i++) 
	{
        for(int j = 1; j <= k; j++) 
		{
            if(j == 1 && a[i] == 0)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = (dp[i][j] + dp[i - 1][j] + dp[i - 1][j - 1]) % 720720;
        }
    }
    cout << (k == 1 ? n : dp[n][k]);
    return 0;
}
