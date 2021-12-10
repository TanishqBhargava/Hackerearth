/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long t;
	cin >> t;
	while(t--)
	{
		long long n, cnt = 0;
		cin >> n;
		map<char, long long> mp;
		string s;
		cin >> s;
		for(long long i = 0; i < n; i++)
		{
			if(s[i] == '?')
				cnt++;
			else
				mp[s[i]]++;
		}
		cin >> s;
		for(long long i = 0; i < n; i++)
		{
			if(s[i] != '?')
			{
				if(mp.find(s[i]) != mp.end())
				{
					mp[s[i]]--;  
					if(mp[s[i]] == 0)
						mp.erase(s[i]);
				}
				else if(cnt != 0)
					cnt--;
				else
				{
					cout << "NO" << endl;
					goto h;
				}
			}
		}
		cout << "YES" << endl;
		h:;
	}
}
