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
	string s;
    cin >> s;
	long long n = (long long)s.size();
	long long pref[n + 1] = {0}, val = n, q;
	for(long long i = 1; i <= n; i++)
    {
		pref[i] = val;
		pref[i] += pref[i - 1];
		val -= 1;
	}
    cin >> q;
	while(q--)
    {
		long long k;
        cin >> k;
		if(k <= n * (n + 1) / 2 && k >= 1)
        {
		    auto i = lower_bound(pref, pref + n + 1, k) - pref;
		    k -= pref[i - 1];
		    string str = s.substr(i - 1, k);
		    cout << str << "\n";
		}
		else
		    cout << -1 << "\n";
	}
	return 0;
}
