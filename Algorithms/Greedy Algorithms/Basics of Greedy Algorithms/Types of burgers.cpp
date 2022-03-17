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
	long long int t;
    cin >> t;
    while(t--)
    {
		long long int x, y, z, k, ans = 0;
        cin >> x >> y >> z >> k;
		vector<long long int>b1(x), b2(y), b3(z);
		for(long long int i = 0; i < x; i++)
            cin >> b1[i];
		for(long long int i = 0; i < y; i++)
            cin >> b2[i];
		for(long long int i = 0; i < z; i++)
            cin >> b3[i];
		sort(b1.begin(), b1.end());
		sort(b2.begin(), b2.end());
		sort(b3.begin(), b3.end());
		set<pair<long long int, pair<long long int, pair<long long int, long long int>>>> se;
		long long int su = b1[x - 1] + b2[y - 1] + b3[z - 1];
		se.insert({su, {x - 1, {y - 1, z - 1}}});
		while(k--)
        {
			auto s = se.end();
            s--;
			long long int d = (*s).first, a = (*s).second.first, b = (*s).second.second.first, c = (*s).second.second.second;
			se.erase(s);
			if(a)
                se.insert({d - b1[a] + b1[a - 1], {a - 1, {b, c}}});
			if(b)
                se.insert({d - b2[b] + b2[b - 1], {a, {b - 1, c}}});
			if(c)
                se.insert({d - b3[c] + b3[c - 1], {a, {b, c - 1}}});
			ans += d;
		}
		cout << ans << endl;
	}
	return 0;
}
