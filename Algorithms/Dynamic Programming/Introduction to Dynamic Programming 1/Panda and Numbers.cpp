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
    long long t, dp[1000040];
    t = 1;
    cin >> t;
	for(long long i = 1; i < 8; i++)
		dp[(long long)pow(i, i)] = 1;
	for(long long i = 2; i < 1000040; i++)
	{
		long long x = i;
		while(x)
		{
			long long rem = x % 10;
			x /= 10;
			if(dp[max(0ll, i - rem * rem)])
			{
				dp[i] = 1;
				break;
			}
		}
	}
    while(t--)
    {
		long long n; 
		cin >> n;
		cout << (dp[n] ? "Yes" : "No") << endl;
	}
    return 0;
}
