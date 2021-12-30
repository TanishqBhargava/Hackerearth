/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t; 
	cin >> t;
	while(t--)
	{
	    long long n, k; 
		cin >> n >> k;
		long long a[n], dp[n + 1] = {0};
		for(int i = 0; i < n; i++)
		    cin >> a[i];
        dp[0] = max((long long)0, a[0]);
        for(int i = 1; i < n; i++)
        {
            if(i - k - 1 < 0)
                dp[i] = max(dp[i - 1], a[i]); 
            else
			    dp[i] = max(dp[i - 1], a[i] + dp[i - k - 1]);
        }
        cout << dp[n - 1] << endl;
    }
    return 0;
}
