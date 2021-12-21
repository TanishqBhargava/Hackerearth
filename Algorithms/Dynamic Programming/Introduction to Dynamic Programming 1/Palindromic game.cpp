/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>box;
int dp[107][107];

int ans(string &s,int l, int r)
{
  	if(box[s[l]] or box[s[r]]) 
  		return 1;
  	if(dp[l][r] != -1)
    	return dp[l][r];
  	box[s[l]]++;
  	int res = ans(s, l + 1, r);
  	box[s[l]]--;
  	box[s[r]]++;
  	int res1 = ans(s, l, r - 1);
  	box[s[r]]--;
  	return dp[l][r]=!(res & res1);
}

int main()
{
  	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
  	cin >> s;
  	unordered_map<int, int>mp;
  	bool fl = true;
  	for(auto &i : s)
	{
   	 	mp[i]++;
    	if(mp[i] > 1)
		{
      		fl = false;
      		break;
    	}
  	}
  	if(fl)
	{
    	cout << "Tie" << endl;
   	 	exit(0);
  	}
  	if(s.size() > 106)
    	s = s.substr(0, 53) + s.substr(s.size() - 53);
    memset(dp, -1, sizeof(dp));
  	if(ans(s, 0, s.size() - 1))
    	cout << "Alice" << endl;
    else
    	cout << "Bob" << endl;
}
