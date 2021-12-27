/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int dp[1000001];
	for(int i = 0; i < 1000001; i++)
	    dp[i] = -1;
	dp[3] = dp[5] = dp[7] = 1;
	dp[6] = 2;
	for(int i = 8; i < 1000001; i++)
	{
		int op1, op2, op3 = INT_MAX;
		if(dp[i - 3] != -1)
    		op1 = dp[i - 3] + 1;
        if(dp[i - 5] != -1)
    		op2 = dp[i - 5] + 1;
		if(dp[i - 7] != -1)
	    	op3 = dp[i - 7] + 1;
		dp[i] = min(op1, min(op2, op3));
	}	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
}
