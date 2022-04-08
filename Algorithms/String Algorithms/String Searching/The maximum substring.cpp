/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s, ans;
	cin >> s;
	int mp[26] = {0}, mx = 0, m[26] = {0};
	for(int h = 0; h < s.size(); h++)
	{
  		mp[s[h] - 'a']++;
  		mx = max(mx, mp[s[h] - 'a']);
	}
	for(int h = 0; h < s.size(); h++)
	{
  		if(mp[s[h] - 'a'] == mx && m[s[h] - 'a'] == 0) 
		{
    		m[s[h] - 'a']++;
    		int j = h + 1;
    		string res;
    		res.push_back(s[h]);
    		while(j < s.size() && m[s[j] - 'a'] == 0 && mp[s[j] - 'a'] == mx)
			{
      			res.push_back(s[j]);
      			m[s[j] - 'a']++;
      			j++;
    		}
    		if(res.size() > ans.size())
      			ans = res;
  		}
	}
	cout << ans << endl;
}
