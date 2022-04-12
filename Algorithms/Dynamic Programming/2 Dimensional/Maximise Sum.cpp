/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std; 

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long n;
    cin >> n;
    long long data[n], dp[n][n];
    for(long long i = 0; i < n; ++i)
        cin >> data[i];
    for(long long i = 0; i < n; ++i)
        dp[i][i] = data[i];
    for(long long i = 1; i < n; ++i)
    {
        for(long long j = 0; j < n - i; ++j)
        {
            long long l = j, r = j + i;
            long long _1 = dp[l][r - 1] + data[r], _2 = data[r - 1] * data[r], _3 = dp[l + 1][r] + data[l], _4 = data[l + 1] * data[l];
            if(i > 1)
			{
                _2 += dp[l][r - 2];
                _4 += dp[l + 2][r];
			}
            dp[l][r] = max(max(_1, _2), max(_3, _4));
        }
    }
    cout << dp[0][n - 1] << endl;
}
