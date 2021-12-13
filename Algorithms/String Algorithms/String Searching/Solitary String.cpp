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
 	int t;
	string s;
	cin >> t;
	while(t--)
	{
		cin >> s;
		int a[26], res = -1;
		memset(a, -1, sizeof(a));
		for(int i = 0; i < (int)s.size(); i++)
		{
			if(a[s[i] - 'a'] == -1)
				a[s[i] - 'a'] = i;
			else
				res = max(res, i - a[s[i] - 'a'] - 1);
		}
		cout << res << endl;
	}
	return 0;
}
