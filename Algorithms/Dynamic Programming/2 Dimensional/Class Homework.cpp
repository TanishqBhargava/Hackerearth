/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long dp[21][4];

long long ans(string& s, int i = 0, int k = 0)
{
  	if(dp[i][k] != -1)
    	return dp[i][k];
  	if(k == 3)
  	{
    	if(i == s.size()) 
			return LLONG_MIN;
    	if(s[i] == '0')
		{
      		if(i == s.size()-1) 
	  			return 0;
      		return LLONG_MIN;
    	}
    	if(s.size() - i > 13)
      		return LLONG_MIN;
    	if(s.size() - i == 13)
		{
      		long long x = stoll(s.substr(i, s.size() - i));
      		if(x == 1000000000000) 
	  			x;
      		return LLONG_MIN;
    	}
    	return stoll(s.substr(i, s.size() - i));
  	}
  	if(i < s.size() and s[i] == '0')
    	return ans(s, i + 1, k + 1);
  	long long res = LLONG_MIN;
  	for(int h = 1; h <= 13; h++)
  	{
    	if(i + h > s.size()) 
		 	break;
    	long long x = stoll(s.substr(i, h));
    	if(x <= 1000000000000)
      		res = max(res, x + ans(s, i + h, k + 1));
  	}
  	return dp[i][k] = res;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	int t;
  	cin >> t;
  	while(t--)
  	{
    	string s;
    	cin >> s;
    	memset(dp, -1, sizeof(dp));
    	long long res = ans(s);
    	if(res < 0)
      		cout << "unlucky" << endl;
    	else 
			cout << res << endl;
  	}
}
