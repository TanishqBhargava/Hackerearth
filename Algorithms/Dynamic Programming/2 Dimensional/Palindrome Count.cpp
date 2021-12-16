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
  	string s;
  	cin >> s;
  	vector<vector<int>>dp(s.size(), vector<int>(s.size()));
  	for(int h = s.size() - 1; h >= 0; h--)
	{
    	for(int j = h; j < s.size(); j++)
		{
      		if(h == j)
        		dp[h][j] = 1;
           	else if(j == h + 1 and s[j] == s[h])
        		dp[h][j] = 1;
            else if(s[h] == s[j] and dp[h + 1][j - 1] == 1)
        		dp[h][j] = 1;
        }
  	}
  	int ans = 0;
  	for(auto &i : dp)
  	{
    	for(auto &u : i)
      		ans += u;
    }
  	cout << ans << endl;
}
