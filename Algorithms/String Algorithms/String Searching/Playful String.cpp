/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
bool solve(string s, string p)
{
	int m = s.length(), n = p.length(), j = 0;
	for(int i = 0; i < m; i++)
	{
		if(s[i] == p[j])
			j++;
	}
	return j == n;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		string s, p;
		cin >> s >> p;
	    string rev = string(p.rbegin(), p.rend());
	    bool flag = solve(s, p) && solve(s, rev);
	    cout << (flag ? "GOOD STRING" : "BAD STRING") << endl;
	}
	return 0;
}
