/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>  
using namespace std;
 
long long check(vector<long long>&v, vector<long long>&hass)
{
    for(long long i = 0; i < v.size(); i++)
	{
        if(hass[v[i]] == 0) 
			return 0;
    }
    return 1;
}

int main()
{
    long long t = 1;
    while(t--)
	{
        string s; 
		cin >> s;
		long long n, r = s.size() - 1, ans = 0; 
		cin >> n;
		vector<long long> v(n, 0), hass(12, 0);
		for(long long i = 0; i < n; i++)
			cin >> v[i];
		for(long long i = s.size() - 1; i >= 0; i--)
		{
			hass[s[i] - '0']++;
			while(r >=i && check(v, hass))
			{
				hass[s[r] - '0']--;
				r--;
			}
			ans += long(s.size() - r - 1);
		}
		cout << ans << endl;
    }
    return 0;
}
