/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int limit = sqrt(100001);
	bool isprime[100001];
	for(int i = 0; i < 100001; i++) 
		isprime[i] = true;
	isprime[0] = true;   //delibaretaly made prime
	isprime[1] = false;
	for(int i = 2; i <= limit; i++) 
	{
		for(int j = 2 * i; j < 100001; j+=i) 
			isprime[j] = false;
	}
 	int t;
	cin >> t;
	while(t--) 
	{
		string s, ans = "YES";
		cin >> s;
		int c[27] = {0}, n = 0;
		for(int i = 0; i < s.length(); i++) 
			c[s[i] - 96]++;
		for(int i = 0; i < 27; i++) 
		{
			if(!isprime[c[i]]) 
			{
				ans = "NO";
				break;
			}
			if(c[i] != 0)
				n++;
		}
		if(!isprime[n])
			ans = "NO";
		cout << ans << endl;
	}
	return 0;
}
