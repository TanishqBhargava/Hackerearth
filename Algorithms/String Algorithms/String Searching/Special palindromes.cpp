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
	long long t, n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
		string s;
		cin >> s;
		vector<long long> pref_suff(n, 0);
		for(long long i = 1; i < n; i++)
		{
			long long j = pref_suff[i - 1];
			while(j > 0 and s[i] != s[j])
				j = pref_suff[j - 1];
			if(s[i] == s[j])j++;
			pref_suff[i] = j;
		}
		long long ans = n;
		for(long long i = 0; i < n; i++)
		{
			long long j = i;
			while(j > 0 and pref_suff[j] > 0)
			{
				ans++;
				j = pref_suff[j] - 1;
			}
		}
	    cout << ans << endl;
	}
}
