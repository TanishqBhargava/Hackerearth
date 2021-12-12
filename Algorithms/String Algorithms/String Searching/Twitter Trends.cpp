/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	map<string,int> m;
	int n;
	cin >> n;
	n = 5;
	string s;
	while(cin >> s)
	{
		if(s[0] == '#')
			m[s]++;
	}
	while(n--)
	{
		auto ans = m.begin();
		for(auto it = m.begin(); it != m.end(); it++)
		{
			if(it->second > ans->second)
				ans = it;
			else if(it->second == ans->second && it->first < ans->first)
				ans = it;
		}
		cout << ans->first << endl;
		ans->second = -1;
	}
	return 0;
}
